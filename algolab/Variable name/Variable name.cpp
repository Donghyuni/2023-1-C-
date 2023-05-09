#include <iostream>
using namespace std;

bool Name(char* str) {
    if (*str >= '0' && *str <= '9') { // 첫 글자가 숫자인 경우 false 리턴
        return false;
    }
    while (*str) { // 문자열 끝까지 반복
        if (!(*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z' || *str == '_' || (*str >= '0' && *str <= '9'))) { // 영문자, 숫자, '_' 이외의 문자가 포함된 경우 false 리턴
            return false;
        }
        str++; // 다음 문자로 이동
    }
    return true; // 모든 검사를 통과한 경우 true 리턴
}

int main() {
    int t; // 테스트 케이스 개수
    cin >> t;
    cin.ignore(); // 버퍼 비우기
    while (t--) {
        char str[257]; // 입력받을 문자열
        cin.getline(str, 257);
        if (Name(str)) {
            cout << 1 << endl; // 변수 이름으로 사용 가능한 경우
        } else {
            cout << 0 << endl; // 변수 이름으로 사용 불가능한 경우
        }
    }
    return 0;
}