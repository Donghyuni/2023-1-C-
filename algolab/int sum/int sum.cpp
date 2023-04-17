#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t; // 테스트 케이스 수 입력

    while (t--) { // 각 테스트 케이스에 대해 반복
        int n;
        cin >> n; // 정수의 개수 입력

        int nums[n];
        for (int i = 0; i < n; i++) {
            cin >> nums[i]; // n개의 정수 입력받아 배열에 저장
        }

        int total = 0;
        for (int i = 0; i < n; i++) {
            total += nums[i]; // 배열의 합 계산
        }

        cout << total << endl; // 합 출력
    }

    return 0;
}