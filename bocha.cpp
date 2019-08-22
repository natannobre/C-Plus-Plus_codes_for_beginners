#include <iostream>

using namespace std;

int main(){
	int vet[3];

	for(int i=0; i < 3; i++){
		cin >> vet[i];
	}

	for(int i = 0; i < 3; i++){
		for(int j = i+1; j < 3; j++){
			int x;
			if(vet[i] < vet[j]){
				x= vet[i];
				vet[i]= vet[j];
				vet[j]= x;
			}
		}
	}

	cout << vet[1] << endl;

	return 0;
}	