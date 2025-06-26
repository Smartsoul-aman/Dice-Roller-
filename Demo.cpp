#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void mainGame(int &numDice);

int main()
{   
    srand (time(NULL));

    int gameRunning = true;
    int numDice;

    while (gameRunning == true)
    {
        system("cls");
        cout << "\n How many dice would you like to use? (1-4)" << endl;
        cout << "\n Enter '0' to exit." << endl;
        cout << "\n> ";
        cin >> numDice;

        if (numDice == 1 || numDice == 2 || numDice == 3 || numDice == 4) 
        {
            mainGame(numDice);
        }

        else if (numDice == 0)
        {
            return 0;
        }

        else {
            system("cls");
            cout << "\n That was invalid input!" << endl;
            cout << "\n ";
            system("pause");
        }
    }
}

void mainGame(int &numDice)
{
    bool goAgain = true;
    int dice[4];
    int input;

    while (goAgain == true)
    {
        for (int x = 0; x != numDice; x++)
        {
            dice[x] = (rand() % 6) + 1;

            cout << "\n Dice " << x + 1 << " shows a " << dice[x] << "!" << endl;
            cout << "\n ";
            system("pause");    
        }

        system("cls");
        cout << "\n Would you like to go again with " << numDice << " dice?" << endl;
        cout << "\n Enter '1' for yes or '2' for no." << endl;
        cout << "\n> ";
        cin >> input;
        switch (input)
        {
            case 1:
                break;

            case 2:
                goAgain = false;
        }
    }
}