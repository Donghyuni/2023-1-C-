#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define TARGET 'e'

int main(int argc, char *argv[]){
    if (argc<2){cout<<"one command line argument needed\n"; return -1;}
    int n = strlen(argv[1]);
    char *a = new char[n*2+3];
    if(!a) {cout<<"allocation failed.\n"; return -1;}
    a[0] = '!';
    int char_pos = 1;               //배열의 위치를 위한 변수 선언
    for(int i=0; i<n; i++){         // TARGET으로 e 탐색
        if(argv[1][i] == TARGET){   //argv로 입력받기
            a[char_pos++] = 'e';    
        }
        a[char_pos++] = argv[1][i];
    }
    a[char_pos++] = '.';
    cout << a << endl;

    string s = "!";
    s += argv[1];
    s += ".";
    int str_pos = s.find(TARGET);

    while(str_pos != string::npos){
        s.insert(str_pos+1, "e");
        str_pos = s.find(TARGET, str_pos+2);
    }
    cout << s << endl;
    return 0;
}
