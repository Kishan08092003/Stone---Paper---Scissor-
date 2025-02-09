#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(NULL));
    int user = 0;
    int computer = 0;
    int  random_no;

    cout << "Stone Paper Scissor Game" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissor" << endl;

    cout << "Enter your choice (1, 2, or 3): ";
    cin >> user;

    // Input validation: check if user enters a number between 1 and 3
    if(user < 1 || user > 3) 
    {
        cout << "Invalid choice! Please select a number between 1 and 3." << endl;
        return 1; // Exit the program if input is invalid
    }

    // Display user's choice
    if(user == 1) cout << "You choose Rock" << endl;
    else if(user == 2) cout << "You choose Paper" << endl;
    else cout << "You choose Scissor" << endl;

    // Computer's choice
   random_no= rand() % 3 + 1;
    computer= random_no;
    if(computer == 1) cout << "Computer chooses Rock" << endl;
    else if(computer == 2) cout << "Computer chooses Paper" << endl;
    else cout << "Computer chooses Scissor" << endl;

    // Match result
    if(user == computer)
     {
        cout << "Match Tie" << endl;
    }
     else if(user == 1)
     {
        if(computer == 2)
        { 
        cout << "You lose!" << endl;
        }
        if(computer == 3)
        { 
        cout << "You win!" << endl;
        }
    } 
    else if(user == 2) 
    {
        if(computer == 1)
        {
         cout << "You win!" << endl;
         }
        if(computer == 3) 
        {
        cout << "You lose!" << endl;
        }
    } 
    else if(user == 3) 
    {
        if(computer == 1) 
        {
        cout << "You lose!" << endl;
        }
        if(computer == 2) 
        {
        cout << "You win!" << endl;
        }
    }
    

    return 0;
}