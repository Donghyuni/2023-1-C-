// 20223092 서동현

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void dice(int n){
  srand(n);
  for (int i=0; i<10; i++){
    int dice = (rand() % 6)+1 ;
    cout << dice << " ";
  }
}
int main(int argc, char *argv[]){
  if (argc != 2){
    cout << "usage: ./dice n\n";
    return 1;
  }
  else{
    int n = atoi(argv[1]);
    dice(n);
    srand(time(NULL));
    cout << endl;
    return 0;
  }

}