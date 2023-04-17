#include <iostream>
using namespace std;

int main(){

  int t;
  cin >> t;
  for(int i=0; i<t; i++){
    int n,a,b,num=1;
    cin >> n >> a >> b;
    int q = n;
    int w = 0, e = -1, val = 0;
    int arr1[n][n]{};
    int arr2[n*n] = {1};
    for(int j=0; j<n; j++){
      for(int k=0; k<n; k++){
        arr1[j][k] = num;
        num++;
      }
    }
    while(q>0){
      for(int i=0; i<q; i++){
        e++;
        arr2[val] = arr1[w][e];
        val++;
      }
      q--;
      for(int i=0; i<q; i++){
        w++;
        arr2[val] = arr1[w][e];
        val++;
      }
      for(int i=0; i<q; i++){
        e--;
        arr2[val] = arr1[w][e];
        val++;
      }
      q--;
      for(int i=0; i<q; i++){
        w--;
        arr2[val] = arr1[w][e];
        val++;
      }
    }
    for(int i=a-1; i<=b-1; i++){
      cout << arr2[i] << " ";
    }
    cout << endl;
  }
}