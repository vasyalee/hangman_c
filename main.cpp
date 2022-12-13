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


    while (founded < toBeGuessed.size() - 1 && lives > 0) {
        cout << "You currently have " << lives << " lives" << endl;
        for (int i = 0; i < toBeGuessed.size(); i++) {
            if (toBeGuessed[i] != '*') {
                cout << '_';
            }
            else {
                cout << guessed[i];
            }
        }

    }



}
