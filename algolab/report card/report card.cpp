#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, Grade;
        int RPA = 0, RPB = 0, RPC = 0, RPD = 0, RPF = 0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> Grade;
            if(Grade>=90){RPA++;}
            else if(Grade>=80 && Grade<90){RPB++;}
            else if(Grade>=70 && Grade<80){RPC++;}
            else if(Grade>=60 && Grade<70){RPD++;}
            else{RPF++;}
        } 
        cout << RPA << " " << RPB << " " << RPC << " " << RPD << " " << RPF << endl;
    }
}
