#include <iostream>
using namespace std;

// 입력된 년도가 윤년인지 판별하는 함수
bool LeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;    // 400의 배수인 경우 윤년
            }
            else {
                return false;   // 100의 배수이지만 400의 배수가 아닌 경우 평년
            }
        }
        else {
            return true;    // 4의 배수인 경우 윤년
        }
    }
    else {
        return false;   // 4의 배수가 아닌 경우 평년
    }
}

// 요일을 계산하는 함수
int getDay(int year, int month, int day) {
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};   // 각 월의 계산식에 필요한 수
    if (month < 3) {
        year -= 1;      // 1월, 2월인 경우 작년으로 계산
    }
    int dayofweek = (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
    return dayofweek;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int year, month, day;
        cin >> year >> month >> day;
        int dayOfWeek = getDay(year, month, day);
        cout << dayOfWeek << endl;
    }
    return 0;
}