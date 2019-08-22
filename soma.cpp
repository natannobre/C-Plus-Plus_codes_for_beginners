#include <iostream>

using namespace std;

long long int fat(int n){
	if(n==0){
		return 1;
	}
	return(n*fat(n-1));
}

int main(){

	int x, y;
	while(cin >> x >> y){
		cout << fat(x)+fat(y) << endl;
	}

	return 0;
}