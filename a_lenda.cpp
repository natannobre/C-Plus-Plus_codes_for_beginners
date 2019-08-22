#include <iostream>
#include <list>

using namespace std;

int main(){
	int nc;

	cin >> nc;

	for(int i=0; i < nc; i++){
		int n, k;
		list<int> lista;

		cin >> n >> k;

		for(int j=1; j<=n; j++){
			lista.push_back(j);
		}
		while(lista.size() != 1){
			for(int j=0; j<k-1; j++){
				lista.push_back(lista.front());
				lista.pop_front();
			}
			lista.pop_front();
		}

		cout << "Case" << " " << i+1 << ":" << " " << lista.front() << endl;  

	}

	return 0;
}