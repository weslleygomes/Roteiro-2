#include <iostream>
using namespace std;

int main(){
	int i, j, n;
	
	cin >> n;

	while(1){
		for(i=0; i<=n; i++){
			for(j=0; j<i; j++){
				cout << i << " ";
			}
		cout << endl;
		}
    break;
	}
	return 0;
}
