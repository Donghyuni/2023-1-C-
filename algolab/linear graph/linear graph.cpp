#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
    int num;
    cin >> num;

    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i==(num/2)&&j==(num/2)) cout << '0';
            else if(i==(num/2)) cout << '+';
            else if(j==(num/2)) cout << 'I';
            else if(i+j==num-1) cout << '*';
            else cout <<'.';
        }
        cout << '\n';
    }
}
}  