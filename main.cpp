#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <stdlib.h>

using namespace std;

int main() {

    random_device hd;
    mt19937 gen(hd());


    bool wishToContinue = true;
    int topic;
    string answer;

    string IT[10] = {"devops", "server", "client", "linux", "python",
                     "javascript", "microsoft", "browser","intel", "motherboard" };
    string crypto[10] = {"bitcoin", "ethereum", "cosmos", "node", "miner", "validator",
                         "atom", "stablecoin", "uniswap", "cryptocurrency"};


while (true) {
    while (true) {
        //Game menu
        system("cls");
        for (int i = 0; i < 15; i++) {
            cout << char(205);
        }
        cout << endl;

        cout << "Welcome to Hangman!" << endl;
        cout << "Choose your topic for this game: " << endl;
        cout << "[1] IT" << endl;
        cout << "[2] crypto" << endl;
        cout << "[0] exit" << endl;
        for (int i = 0; i < 15; i++) {
            cout << char(205);
        }
        cout << endl;
        cin >> topic;
        cin.clear();
        cin.ignore(1024, '\n');

        if (topic == 1) {
            answer = IT[gen() % 10];
            system("cls");
            break;
        } else if (topic == 2) {
            answer = crypto[gen() % 10];
            system("cls");
            break;
        } else if (topic == 0) {
            system("cls");
            cout << "Ok, see you next time!" << endl;
            system("pause");
            exit(0);
        }
        else {
            system("cls");
            cout << "No such option. Try again..." << endl;
            system("pause");
        }
    }


    vector <char> guessed = {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};
    vector <char> toBeGuessed = {};
    vector <char> alreadyUsed = {};
    int lives = 10;
    int founded = 0;
    for (int i = 0; i < answer.length(); i++) {
        toBeGuessed.push_back(answer[i]);
    }

    while (founded < toBeGuessed.size() && lives > 0 && wishToContinue) {
        system("cls");
        bool alreadyIn = false;
        int newFounded = 0;
        char inputChar = ' ';
        cout << "You currently have " << lives << " lives" << endl;
        for (int i = 0; i < toBeGuessed.size(); i++) {
            if (toBeGuessed[i] != '*') {
                cout << '_';
            }
            else {
                cout << guessed[i];
            }

        }
        cout << endl;
        cout << "Letters already used: " << endl;
        for (int i = 0; i < alreadyUsed.size(); i++) {
            if (not(alreadyUsed[i] == '*')) {
                cout << alreadyUsed[i] << " ";
            }

        }
        cout << endl;

        cout << "Enter your letter: " << endl;
        cin >> inputChar;
        cin.clear();
        cin.ignore(1024, '\n');
        for (int i = 0; i < toBeGuessed.size(); i++) {
            if (inputChar == toBeGuessed[i]) {
                guessed[i] = toBeGuessed[i];
                toBeGuessed[i] = '*';
                founded++;
                newFounded++;

            }
        }

        for (int i = 0; i < alreadyUsed.size(); i++) {
            if (inputChar == alreadyUsed[i]) {
                alreadyIn = true;
            }
        }
        if (alreadyIn == false) {
            alreadyUsed.push_back(inputChar);
        }


        if (newFounded == 0) {
            lives--;
        }


    }
    system("cls");
    if (lives > 0) {
        cout << answer << endl;
        cout << endl;
        cout << "Congratulations! You won!" << endl;

    } else {
        cout << "Oops, see you next time!" << endl;
    }
    wishToContinue = false;
    cout << "Want to try again? Press 'y' to try again or 'n' to exit" << endl;
    char inp;
    cin >> inp;
    cin.clear();
    cin.ignore(1024, '\n');
    if (inp == 'y') {
        wishToContinue = true;
        system("cls");
    } else if (inp == 'n') {
        system("cls");
        break;
    } else {

        system("cls");
        cout << "No such answer. Try again..." << endl;
        system("pause");
    }
}
system("cls");
cout << "Thanks for playing! See you next time..." << endl;
system("pause");


}
