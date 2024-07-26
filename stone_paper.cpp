#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void user_choice(int);
void computer_choice(int);

int main() {
    int i = 1;
    int win = 0, lose = 0, tie = 0;

    do {
        string reset = "\033[0m";
        string magenta = "\033[1;35m";
        string bold = "\033[1;1m";
        string yellow = "\033[1;33m";
        string underline = "\033[1;4m";

        srand(time(0)); // Seed for random number generation

        int userchoice;
        int computerchoice;

        computerchoice = rand() % 3 + 1;
        cout<<underline << yellow << "*********************************" << endl;
        cout <<underline<< "          Rock-Paper-Scissors         " << endl;
        cout << "*********************************" << endl << reset;

        cout << bold << "Choose Your Option:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissor" << endl;
        cout << "Enter Your Choice (1-3): " << reset;

        cin >> userchoice;

        user_choice(userchoice);
        computer_choice(computerchoice);

        if (userchoice == 1 && computerchoice == 3 || userchoice == 2 && computerchoice == 1 || userchoice == 3 && computerchoice == 2) {
            cout << underline << magenta << "You Win!!" << endl << reset;
            win++;
        } else if (userchoice == computerchoice) {
            cout << underline << magenta << "It's a Tie" << endl << reset;
            tie++;
        } else {
            cout << underline << magenta << "Computer Wins!!" << endl << reset;
            lose++;
        }

        i++;

        if (i == 11) {
            cout << underline << "Final Score:" << endl;
            cout << "Wins: " << win << endl;
            cout << "Losses: " << lose << endl;
            cout << "Ties: " << tie << endl << reset;
        }
    } while (i <= 10);
}

void user_choice(int userchoice) {
    string magenta = "\033[1;35m";
    string reset = "\033[0m";

    switch (userchoice) {
        case 1:
            cout << magenta << "You Chose: Rock" << endl << reset;
            break;
        case 2:
            cout << magenta << "You Chose: Paper" << endl << reset;
            break;
        case 3:
            cout << magenta << "You Chose: Scissor" << endl << reset;
            break;
    }
}

void computer_choice(int computerchoice) {
    string magenta = "\033[1;35m";
    string reset = "\033[0m";

    switch (computerchoice) {
        case 1:
            cout << magenta << "Computer Chose: Rock" << endl << reset;
            break;
        case 2:
            cout << magenta << "Computer Chose: Paper" << endl << reset;
            break;
        case 3:
            cout << magenta << "Computer Chose: Scissor" << endl << reset;
            break;
    }
}