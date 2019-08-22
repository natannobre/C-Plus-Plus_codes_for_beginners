#include <iostream>

using namespace std;

int main(){
	int a1, a2, a3, x1, x2, x3;

	cin >> a1 >> a2 >> a3;
	x1= a2*2+a3*4;
	x2= a1*2+a3*2;
	x3= a1*4+a2*2;

	if((x1<=x2) && (x1<=x3)){
		cout << x1 << endl;

	}else if((x2<=x1) && (x2<=x3)){
		cout << x2 << endl;

	}else if((x3<=x1) && (x3<=x2)){
		cout << x3 << endl;
	}

	return 0;
}	