#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, s, t;
        cin >> r >> s >> t;
        
        int A[r][s], B[s][t], C[r][t];

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < s; j++) {
                cin >> A[i][j];
            }
        }
        
        for (int i = 0; i < s; i++) {
            for (int j = 0; j < t; j++) {
                cin >> B[i][j];
            }
        }
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < t; j++) {
                C[i][j] = 0;
                for (int k = 0; k < s; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < t; j++) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }
}
