#include <iostream>

using namespace std;

int main(){
	int N, x=0;

	cin >> N;

	if(((N-1)%3==0) || ((N-2)%3==0)){
		x=1;
		cout << x << endl;
	}else if(N%3==0){
		cout << x << endl;
	}else{
		x=2;
		cout << x << endl;
	}



	return 0;
}	