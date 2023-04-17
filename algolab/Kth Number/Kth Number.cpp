#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, K;
    cin >> t;
    while(t--){
        cin >> K;
        int num_len = 0;
        for(int i=1; num_len<K; i++){
            num_len += to_string(i).size();
            if(num_len >= K){
                string num = to_string(i);
                cout << num[K-(num_len-to_string(i).size())-1] << endl;
            }
        }
    }
    return 0;
}