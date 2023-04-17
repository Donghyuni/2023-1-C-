#include <iostream>
using namespace std;

int main(){
	int t, n;
	int num;
	cin >> t;

	while(t--){
		cin >> n;
		int front = 0;
		int back = 0;
		int count = 0;
		for(int i = 0; i < n; i++){
			cin >> num;
			if(i == 0){front = num;back = 0;}
            else if(i < n){if(num > front){if(num > back){front = num;back = num;}}
                else if(num == front){continue;}
                else if(num < front){
					if(num > back){front = num;}
                    else if(num < back){count ++; front = num; back = 0;}}}

		}
		cout << count << endl;
	}

	return 0;
}