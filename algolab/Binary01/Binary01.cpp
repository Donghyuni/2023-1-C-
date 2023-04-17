#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int NUM0 = 0, NUM1 = 0;
        cin >> n;
        while(n!= 0){
            if(n%2==0){
                NUM0++;
            }
            else{
                NUM1++;
            }
            n = n / 2; 
        }
        cout << NUM0 << " ";
        cout << NUM1 << endl;
    }
    return 0;
}