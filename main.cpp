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

    int lives = 10;
    int founded = 0;

    string words[3] = {"apple", "banana", "juice"};
    string answer = words[gen() % 3];
    vector <char> guessed = {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'};
    vector <char> toBeGuessed = {};

    for (int i = 0; i < answer.length(); i++) {
        toBeGuessed.push_back(answer[i]);
    }


    while (founded < toBeGuessed.size() && lives > 0) {
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

        cout << "Enter your letter: " << endl;
        cin >> inputChar;
        for (int i = 0; i < toBeGuessed.size(); i++) {
            if (inputChar == toBeGuessed[i]) {
                guessed[i] = toBeGuessed[i];
                toBeGuessed[i] = '*';
                founded++;
                newFounded++;
            }

        }
        if (newFounded == 0) {
            lives--;
        }


    }
    if (lives > 0) {
        cout << answer << endl;
        cout << endl;
        cout << "Congratulations! You won!" << endl;

    } else {
        cout << "Oops, see you next time!" << endl;
    }



}
