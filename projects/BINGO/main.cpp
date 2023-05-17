#include<bits/stdc++.h>
using namespace std;

int draw[75];
int lowToHigh[75];
int verify[75];
int check [75];

int roll = 0;
string cmd;

void start() {
    int count1 = 1;
    int count2 = 0;

    for (int i = 0; i<15; i++){
        for (int g = 0; g<5; g++){
            verify[count2]=count1;
            count2++;
            count1+=15;
        }
        count1-=74;
    }
}

int indexFinder(int arr[], int elem){
    int i = 0;
    while (i < 75)
	{
        if (arr[i] == elem) {
			break;
		}
		i++;
	}
	return i;

}

void selectionSort(int a[]){
    int i, j, min, temp;
    for (i = 0; i < roll - 1; i++) {
    min = i;
    for (j = i + 1; j < roll; j++)
    if (a[j] < a[min])
    min = j;
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;

   }

    for (int e = 0; e<75; e++){
        lowToHigh[e]=0;
    }

    for (int g = 0; g<=roll; g++){
        lowToHigh[g]=a[g];
    }
}

string letterAppend(int num){
    string a;
    if (num>=1 && num<=15){
        a="B";
    }
    else if (num>=16 && num<=30){
        a="I";
    }
    else if (num>=31 && num<=45){
        a="N";
    }
    else if (num>=46 && num<=60){
        a="G";
    }
    else if (num>=61 && num<=75){
        a="O";
    }
    else{
        a="Error";
    }
    string num1 = to_string(num);
    return a+" "+num1;

}

void shuffle(int values[], int size) {

	// Create large number of swaps
	// This example takes the size and times it by 20 for the number of swaps
	for (int i = 0; i < (size * 20); i++) {
		// Generate random values for subscripts, not values!
		int randvalue1 = (rand() % size) + 0;
		int randvalue2 = (rand() % size) + 0;

		int temp = values[randvalue1];
		values[randvalue1] = values[randvalue2];
		values[randvalue2] = temp;
	}
}

int main()
{
    // Seed our random number generator.
	srand((int)time(NULL));

    int min=1, max=75;
    int range = (max - min);

    // Create our new array of size "range"
    int *values = new int[range];
    // Load some counting values into our array
    for (int i = 0; i <= range; i++) {
        values[i] = min + i;
    }
    // Now shuffle the array values randomly.
    shuffle(values,range + 1);

    start();

    /*Text File StartUp*/

    string read;
    int gameNum1Int;
    ifstream gameNum("Game_Number.txt");

    while (getline (gameNum, read)) {
    // Output the text from the gameNumber file
        gameNum1Int = std::stoi(read); //Writes the value from that file into the variable gameNum1 as an int
    }

    gameNum1Int++;
    gameNum.close();
    ofstream gameCount("Game_Number.txt");
    string gameNum2 = to_string(gameNum1Int);
    gameCount<<gameNum2;
    gameCount.close();

    // Create and open a text file for the New Game
    ofstream currentGame("Game_"+gameNum2+".txt");

    // Write to the file of the New Game
    currentGame<<"Game# "+gameNum2+"\n"<<endl;
    cout<<"Game# "+gameNum2+"\n"<<endl;


    /*The Game*/

    char save = 'n';
    char exit = 'y';

    while(save=='n'){
        while(exit=='y'){
            cout<<"game>> ";
            cin>>cmd;
            currentGame<<"game>> "<<cmd;
            if(cmd.compare("start")==0&&roll==0){

                draw[roll] = values[roll];

                cout<<letterAppend(draw[roll])<<endl;
                currentGame<<"\n"<<letterAppend(draw[roll])<<endl;

                roll=1;
            }
            else if (cmd.compare("next")==0&&roll!=0&&roll<75){

                draw[roll] = values[roll];

                for (int i=0; i<roll; i++){
                    while (draw[roll]==draw[i]){
                        draw[roll] = values[roll];
                    }
                }

                cout<<letterAppend(draw[roll])<<" (draw "<<roll+1<<")"<<endl;
                currentGame<<"\n"<<letterAppend(draw[roll])<<" (draw "<<roll+1<<")"<<endl;

                roll++;
            }
            else if (cmd.compare("exit")==0){
                exit='n';
            }
            else if (cmd.compare("check")==0){
                cout<<"\nB   I   N   G   O"<<endl;
                cout<<""<<endl;
                currentGame<<"\nB   I   N   G   O"<<endl;
                currentGame<<""<<endl;

                selectionSort(draw);

                int count1;

                for (int j = 1; j<=75; j++){
                    for (int h = 0; h<75; h++){
                        if (lowToHigh[h]==j){
                            check[indexFinder(verify,j)]=lowToHigh[h];
                        }
                    }
                }

                count1 = 0;
                for (int i = 0; i<15; i++){
                    for (int g = 0; g<5; g++){
                        cout<<left<<setw(2)<<check[count1]<<"  ";
                        currentGame<<left<<setw(2)<<check[count1]<<"  ";
                        count1++;
                    }
                    cout<<""<<endl;
                    currentGame<<""<<endl;
                }
                cout<<""<<endl;
                currentGame<<""<<endl;

            }
            else{
                cout<<"Incorrect Input! \n"<<endl;
                currentGame<<"\nIncorrect Input! \n"<<endl;
            }
        }

        cout<<"Exit? ";
        cin>>save;
        currentGame<<"\nExit? "<<save;
    }

    currentGame.close();
    return 0;
}

