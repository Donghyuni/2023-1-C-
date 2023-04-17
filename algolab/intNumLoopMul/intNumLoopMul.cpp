#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;

  for(int i = 0; i<t; i++){
    unsigned long long num,mulNum=1;
    int answer;
    cin >> num;
    if (num/10 == 0){
      cout << num << endl;
    }
    else{
    while(num/10 != 0){
      while(num>0){
        if(num%10 == 0){
          num /= 10;
          continue;
        }
        else{
          mulNum = mulNum * (num%10);
          answer = mulNum;
          num /= 10;
        }
      }
      num = mulNum;
      mulNum = 1;
    }
    cout << answer << endl;
  }
  }
  return 0;
}