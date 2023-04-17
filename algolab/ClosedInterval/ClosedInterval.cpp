#include <iostream>
using namespace std;

int main(){
int t,a,b,c,d;
cin >> t;
int x,y;
while(t--){
    cin >> a >> b >> c >> d;
    if(b<c||d<a){x = 0;}
    else if(a<=c&&b<=d){x=b-c;}
    else if(a>=c&&b>=d){x=d-a;}
    else if(a<=c&&b>=d){x=d-c;}
    else{x=b-a;}
    y=b-a+d-c-x;
    cout << x << " " << y << endl;
}
}