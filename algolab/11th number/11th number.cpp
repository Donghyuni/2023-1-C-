#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string num;
        cin >> num;

        int sum = 0;
        string saved;

        for (int i = 0; i < num.size(); i++) {
            int digit = num[i] - '0';
            sum += digit;

            if (i % 2 == 0) {
                saved += to_string(digit);
            } else {
                saved = to_string(digit) + saved;
            }
        }

        if (sum % 11 == 0) {
            int quo = stoi(saved) / 11;
            cout << quo << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}
