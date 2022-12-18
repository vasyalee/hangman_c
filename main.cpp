#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <random>

using namespace std;

int main() {

    random_device hd;
    mt19937 gen(hd());


    bool wishToContinue = true;


    string words[3] = {"hermanos", "fuerteventura", "sotavento"};





while (true) {
    string answer = words[gen() % 3];
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
    } else if (inp == 'n') {
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
