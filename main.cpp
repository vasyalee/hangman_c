#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>


using namespace std;
void printHangman(int _lives) {
    if (_lives == 10) {
        cout << "|=======|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
        cout << endl;

    } else if (_lives == 9) {
        cout << "|=======|" << endl;
        cout << "|\tO" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
    }
    else if (_lives == 8) {
        cout << "|=======|" << endl;
        cout << "|\tO" << endl;
        cout << "|" << endl;
        cout << "|" << endl;
    }
    else if (_lives == 7) {
        cout << "|=======|" << endl;
        cout << "|\tO" << endl;
        cout << "|       |" << endl;
        cout << "|" << endl;
    }
    else if (_lives == 6) {
        cout << "|=======|" << endl;
        cout << "|\tO" << endl;
        cout << "|       |" << endl;
        cout << "|" << endl;
    }
    else if (_lives == 5) {
        cout << "|=======|" << endl;
        cout << "|\tO" << endl;
        cout << "|      \\|" << endl;
        cout << "|" << endl;
    }
    else if (_lives == 4) {
        cout << "|=======|" << endl;
        cout << "|\tO" << endl;
        cout << "|      \\|/" << endl;
        cout << "|" << endl;
    }
    else if (_lives == 3) {
        cout << "|=======|" << endl;
        cout << "|\tO" << endl;
        cout << "|      \\|/" << endl;
        cout << "|      /" << endl;
    }
    else if (_lives == 2) {
        cout << "|=======|" << endl;
        cout << "|\tO" << endl;
        cout << "|      \\|/" << endl;
        cout << "|      /" << endl;
    }
    else if (_lives == 1) {
        cout << "|=======|" << endl;
        cout << "|\tO" << endl;
        cout << "|      \\|/" << endl;
        cout << "|      /" << endl;
    }

}

int main() {

    random_device hd;
    mt19937 gen(hd());


    bool wishToContinue = true;
    string topic;
    string _topic;
    string answer;


    string crypto[20] = {"bitcoin", "ethereum", "cosmos", "defi", "miner", "validator",
                         "atom", "stablecoin", "uniswap", "cryptocurrency", "exchange", "binance",
                         "swap", "rugpool", "airdrop", "allocation", "near", "solidity", "web3", "tendermint"};
    string films[22] = {"interstellar", "inception", "1917", "dunkirk", "alien", "starwars", "titanic", "terminator",
                        "godfather", "shrek", "matrix", "avengers", "chinatown", "fargo", "taxi", "1+1", "fast&furious", "lebowski", "avatar",
                        "transformers", "snatch", "it"};
    string programmingLanguages[26] = {"python", "javascript", "c++", "c#", "java", "bash", "batch", "golang", "rustlang", "php", "move",
                                   "pascal", "kotlin", "f#", "c", "brainfuck", "ruby", "typescript", "solidity", "swift",
                                   "dart", "delphi", "assembly", "fortran", "groovy", "r"};
    string cars[64] = {"bentley", "alfaromeo", "bugatti", "chevrolet", "landrover", "baojun", "byd", "changan", "chery", "cnhtc", "dadi", "gelly",
                   "lifan", "xinkai", "tianma", "marry", "bmw", "volvo", "mercedes", "audi", "ford", "ferrari", "kia", "honda", "mazda", "nissan",
                   "renault", "skoda", "lada", "toyota", "volkwagen", "hyundai", "subaru", "suzuki", "mitsubishi", "scion", "isuzu", "infinity",
                   "lexus", "daihatsu", "gmc", "pontiac", "mercury", "tesla", "hummer", "chrysler", "dodge", "oldsmobile",
                   "gaz", "aurus", "porsche", "daewoo", "ssangyong", "genesis", "astonmartin", "fiat", "jaguar", "lamborghini", "peugeot",
                   "seat", "saab", "zaz", "smart", "brilliance"};
    string cities[34] = {"amsterdam", "madrid", "berlin", "rotterdam", "warsaw", "poznan", "gdansk", "krakow", "hamburg",
                     "volokolamsk", "michurinsk", "tambov", "ryazan", "lipetsk", "voronezh", "eindhoven", "london",
                     "alicante", "sevilla", "porto", "malaga", "paris", "cologne", "kiel", "leeds", "manchester",
                     "birmingham", "albuquerque", "minsk", "grodno", "granada", "kiev", "vladivostok", "bremen"};
    string airlines[12] = {"ryanair", "klm", "aeroflot", "easyjet", "wizzair", "pobeda", "canaryfly", "binter", "lot", "lufthansa", "eurowings", "iberia"};


while (true) {
    while (true) {
        //Game menu
        system("cls");
        cout << " " << char(186);
        for (int i = 0; i < 35; i++) {
            cout << char(205);
        }
        cout << endl;
        cout << " " << char(186);
        cout << "Welcome to Hangman!" << endl;
        cout << " " << char(186);
        cout << "Choose your topic for this game: " << endl;
        cout << " " << char(186);
        cout << " [1] Crypto" << endl;
        cout << " " << char(186);
        cout << " [2] Films" << endl;
        cout << " " << char(186);
        cout << " [3] Programming languages" << endl;
        cout << " " << char(186);
        cout << " [4] Cars" << endl;
        cout << " " << char(186);
        cout << " [5] Cities" << endl;
        cout << " " << char(186);
        cout << " [6] Airlines" << endl;
        cout << " " << char(186);
        cout << " [0] exit" << endl;
        cout << " " << char(186);
        for (int i = 0; i < 35; i++) {
            cout << char(205);
        }

        cout << endl;
        cout << ">>> ";
        cin >> topic;
        cin.clear();
        cin.ignore(1024, '\n');

        if (topic == "1") {
            _topic = "Crypto";
            answer = crypto[gen() % 20];

            system("cls");
            break;
        } else if (topic == "2") {
            answer = films[gen() % 22];
            _topic = "Films";
            system("cls");
            break;
        } else if (topic == "3") {
            answer = programmingLanguages[gen() % 26];
            _topic = "Programming languages";
            system("cls");
            break;
        } else if (topic == "4") {
            answer = cars[gen() % 64];
            _topic = "Cars";
            system("cls");
            break;
        } else if (topic == "5") {
            answer = cities[gen() % 34];
            _topic = "Cities";
            system("cls");
            break;
        } else if (topic == "6") {
            answer = airlines[gen() % 12];
            _topic = "Airlines";
            system("cls");
            break;
        }
        else if (topic == "0") {
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
        printHangman(lives);

        cout << "Current topic is " << _topic << endl;
        cout << endl;
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
        cout << ">>> ";
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
        cout << "|=======|" << endl;
        cout << "|\tO" << endl;
        cout << "|      \\|/" << endl;
        cout << "|      / \\" << endl;
        cout << endl;
        cout << "Oops, you lost. The answer was: " << endl;


        for (int i = 0; i < 15; i++) {
            cout << char(205);
        }
        cout << endl;

        cout << answer << endl;


        for (int i = 0; i < 15; i++) {
            cout << char(205);
        }

        cout << endl;
        cout << "Good luck for the next time!" << endl;
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
