
#include <iostream>
#include <stdlib.h>


using namespace std;
void printrows(string x[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << x[i][j] << "  ";
        }
        cout << "\n";
    }
}
void printrow(string x[3][3], int playera){
    for (int b = 0; b < 3; b++){
        cout << x[playera][b] << "  ";
    }
    cout << "\n";
}
int main()
{
    // an array with 3 rows and 2 columns.
    string namea, nameb;
    bool another = true;
    string x[3][3] = {{"None", "None", "None"}, {"None", "None", "None"}, {"None", "None", "None"}};
    cout << "Enter your name:   ";
    cin >> namea;
    cout << "\n";
    cout << "Enter your name:   ";
    cin >> nameb;
    cout << "\n";
    printrows(x);
    cout << endl;
    while (another == true){
        int playera, playerap, playerb, playerbp;
        cout << "It is " << namea << "'s turn." << endl;
        cout << "Enter the row to put your X in(1, 2, 3):  ";
        cin >> playera;
        playera--;
        cout << "\n";
        printrow(x, playera);
        cout << "\n";
        cout << "Enter the place to put your X in(1, 2, 3):  ";
        cin >> playerap;
        playerap--;
        cout << "\n";
        if (x[playera][playerap] == "X" || x[playera][playerap] == "O"){
            cout << "Hey! You can't put your X on top of another X or O!" << endl;
        }
        else{
            x[playera][playerap] = "X";
            printrows(x);
        }
        cout << "It is " << nameb << "'s turn." << endl;
        cout << "Enter the row to put your O in(1, 2, 3):   ";
        cin >> playerb;
        playerb--;
        cout << "\n";
        printrow(x, playera);
        cout << "\n";
        cout << "Enter the place to put your O in(1, 2, 3):   ";
        cin >> playerbp;
        playerbp--;
        cout << "\n";
        if (x[playerb][playerbp] == "X" || x[playerb][playerbp] == "O"){
            cout << "Hey! You can't put your O on top of another X or O!" << endl;
        }
        else{
            x[playerb][playerbp] = "O";
            printrows(x);
        }
        return 0;

    }



    return 0;
}
