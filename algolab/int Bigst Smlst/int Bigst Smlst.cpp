#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int array[n];

        int max_val = -2147483648;
        int min_val = 2147483647;

        for (int i=0; i<n; i++){
            cin >> array[i];
            if(array[i] > max_val){
                    max_val = array[i];
                    }
            if(array[i] < min_val){
                    min_val = array[i];
                }
            }
        cout << max_val << " ";
        cout << min_val << endl;
    }
}