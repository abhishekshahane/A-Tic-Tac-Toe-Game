
#include <iostream>
#include <stdlib.h>


using namespace std;
void printrows(string x[3][3])
{
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << x[i][j] << "  ";
        }
        cout << "\n";
    }
}
void printrow(string x[3][3], int playera)
{
    for (int b = 0; b < 3; b++){
        cout << x[playera][b] << "  ";
    }
    cout << "\n";
}
void check(string x[3][3], bool another, string namea, string nameb)
{
    // Checks for every possible win combination
    if (x[0][0] == "X" && x[0][1] == "X" && x[0][2] == "X"){
        cout << "Nice " << namea << "! You've won the game!";
        another = false;
        exit(0);
    }


    else if (x[1][0] == "X" && x[1][1] == "X" && x[1][2] == "X")
    {
        cout << "Nice " << namea << "! You've won the game!";
        another = false;

        exit(0);
    }

    else if (x[2][0] == "X" && x[2][1] == "X" && x[2][2] == "X")
    {
        cout << "Nice " << namea << "! You've won the game!";
        another = false;

        exit(0);
    }


    else if (x[0][0] == "X" && x[1][0] == "X" && x[2][0] == "X")
    {
        cout << "Nice " << namea << "! You've won the game!";
        another = false;

        exit(0);
    }

    else if (x[0][1] == "X" && x[1][1] == "X" && x[2][1] == "X")
    {
        cout << "Nice " << namea << "! You've won the game!";
        another = false;

        exit(0);
    }

    else if (x[0][2] == "X" && x[1][2] == "X" && x[2][2] == "X")
    {
        cout << "Nice " << namea << "! You've won the game!";
        another = false;

        exit(0);
    }



    else if (x[0][0] == "X" && x[1][1] == "X" && x[2][2] == "X")
    {
        cout << "Nice " << namea << "! You've won the game!";
        another = false;

        exit(0);
    }



    else if (x[0][2] == "X" && x[1][1] == "X" && x[2][0] == "X")
    {
        cout << "Nice " << namea << "! You've won the game!";
        another = false;

        exit(0);
    }

    else
    {
        another = true;
    }
    if (x[0][0] == "O" && x[0][1] == "O" && x[0][2] == "O")
    {
        cout << "Nice " << nameb << "! You've won the game!";
        another = false;

        exit(0);
    }


    else if (x[1][0] == "O" && x[1][1] == "O" && x[1][2] == "O")
    {
        cout << "Nice " << nameb << "! You've won the game!";
        another = false;
        exit(0);
    }


    else if (x[2][0] == "O" && x[2][1] == "O" && x[2][2] == "O")
    {
        cout << "Nice " << nameb << "! You've won the game!";
        another = false;
        exit(0);
    }


    else if (x[0][0] == "O" && x[1][0] == "O" && x[2][0] == "O")
    {
        cout << "Nice " << nameb << "! You've won the game!";
        another = false;

        exit(0);
    }


    else if (x[0][1] == "O" && x[1][1] == "O" && x[2][1] == "O")
    {
        cout << "Nice " << nameb << "! You've won the game!";
        another = false;

        exit(0);
    }

    else if (x[0][2] == "O" && x[1][2] == "O" && x[2][2] == "O")
    {
        cout << "Nice " << nameb << "! You've won the game!";
        another = false;
        exit(0);
    }


    else if (x[0][0] == "O" && x[1][1] == "O" && x[2][2] == "O")
    {
        cout << "Nice " << nameb << "! You've won the game!" << endl;
        another = false;
        exit(0);
    }


    else if (x[0][2] == "O" && x[1][1] == "O" && x[2][0] == "O")
    {
        cout << "Nice " << nameb << "! You've won the game!" << endl;
        another = false;
        exit(0);
    }

    else{
        another = true;
    }

}
int main()
{
    // an array with 3 rows && 3 columns.
    string namea, nameb;
    bool another = true;
    string x[3][3] = {{"None", "None", "None"}, {"None", "None", "None"}, {"None", "None", "None"}};
    cout << "Enter your name:   ";
    cin >> namea;
    cout << "\n";
    cout << "Enter your name:   ";
    cin >> nameb;
    cout << "\n";
    cout << "\n";
    cout << "Tic-Tac-Toe Board:  ";
    cout << "\n";
    printrows(x);
    cout << endl;
    // Main Game Loop below this line:
    while (another == true)
    {
        int playera, playerap, playerb, playerbp;
        cout << "It is " << namea << "'s turn." << endl;
        cout << "Enter the row to put your X in(1, 2, 3):  ";
        cin >> playera;
        playera--;
        cout << "\n";
        cout << "Row which you selected:  ";
        cout << "\n";
        printrow(x, playera);
        cout << "\n";
        cout << "Enter the place to put your X in(1, 2, 3):  ";
        cin >> playerap;
        playerap--;
        cout << "\n";
        if (x[playera][playerap] == "X" || x[playera][playerap] == "O")
        {
            cout << "Hey! You can't put your X on top of another X or O!" << endl;
        }
        else
        {
            x[playera][playerap] = "X";
            cout << "\n";
            cout << "Tic-Tac-Toe Board:  ";
            cout << "\n";
            printrows(x);
            cout << "\n";
        }
        check(x, another, namea, nameb);
        cout << "It is " << nameb << "'s turn." << endl;
        cout << "Enter the row to put your O in(1, 2, 3):   ";
        cin >> playerb;
        playerb--;
        cout << "\n";
        cout << "Row which you selected:  ";
        cout << "\n";
        printrow(x, playera);
        cout << "\n";
        cout << "Enter the place to put your O in(1, 2, 3):   ";
        cin >> playerbp;
        playerbp--;
        cout << "\n";
        if (x[playerb][playerbp] == "X" || x[playerb][playerbp] == "O")
        {
            cout << "Hey! You can't put your O on top of another X or O!" << endl;
        }
        else
        {
            x[playerb][playerbp] = "O";
            cout << "\n";
            cout << "Tic-Tac-Toe Board:  ";
            cout << "\n";
            printrows(x);
            cout << "\n";
        }
        check(x, another, namea, nameb);


    }



    return 0;
}

