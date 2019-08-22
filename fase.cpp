#include <iostream>

using namespace std;

int main(){
	int x, k, aux;

	cin >> x >> k;

	aux= k;
	int vet[x];
	for(int i = 0; i < x; i++){
		cin >> vet[i];
	}
	for(int i = 0; i < x; i++){
		for(int j = i+1; j < x; j++){
			if(vet[i] < vet[j]){
				int a;
				a= vet[i];
				vet[i]= vet[j];
				vet[j]= a;
			}
		}
	}
	for(int i= k; i < x; i++){
		if(vet[k-1]==vet[i]){
			aux++;
		}
	}
	
	cout << aux << endl;

	return 0;
}	