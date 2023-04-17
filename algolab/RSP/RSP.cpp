#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, val, b4_val;
        cin >> n;
        int count = 0;
        for (int j = 0; j < n; j++) {
            cin >> val;
            if (j == 0) {
                b4_val = val;
            }
            else {
                if (val == b4_val) {
                    continue;
                }
                else if ((val == 1 && b4_val == 3) || (val == 2 && b4_val == 1) || (val == 3 && b4_val == 2)) {
                    count++;
                }
                else {
                    count--;
                }
                b4_val = val;
            }
        }
            cout << abs(count) << endl;
    }
    return 0;
}
