#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==(n/2) && j==(n/2)){cout << "O";}
                else if(i==n/2){ cout << "+";}
                else if(j==n/2){cout << "I"; }
                else if(i+j==n-1){ cout << "*";}
                else{cout << ".";}
            }
            cout << endl;
        }
    }
    return 0;
}