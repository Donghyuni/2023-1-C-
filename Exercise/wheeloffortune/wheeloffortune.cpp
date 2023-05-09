#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#define DICT_LEN 3
#define MAX_TRIES 6

int main(){
    string dictionary[] = {"space", "wheel", "program"};
    srand(time(NULL));
    string prob = dictionary[rand()%DICT_LEN];
    int length = prob.length();
    int tries = 0;
    string answer(length, '-');

    cout << "current state : " << answer << endl;

    while(tries < MAX_TRIES && answer != prob){
        char c;
        cout << "guess a letter : ";
        cin >> c;
        if(answer.find(c) != string::npos){
            cout << c << " is guessed previously.\n";
            tries++;
            continue;
        }
        do {
            answer[pos] = c;
            pos = prob.find(c, pos+1);
        } while (pos != string::npos);
        cout << "current state : " << answer << endl;
        if(answer==prob){
            cout << "You WON!!!\n";
            break;
        }
    }
    if (tries >= MAX_TRIES){
        cout << "You lost : the answer was " << prob << endl;
    }
}