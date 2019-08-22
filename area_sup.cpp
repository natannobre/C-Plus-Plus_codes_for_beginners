#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	double matriz[12][12]={0}, soma=0, media=0;
	char O;

	cin >> O;
	if (O == 'S'){
		for(int i=0; i<12; i++){
			for (int j = 0; j < 12; j++){
				cin >> matriz[i][j];
				if((j > i) && ((i+j) > 11)){
					soma+= matriz[i][j];
				}
			}
		}
		printf("%.1lf\n", soma);
	}else if (O == 'M'){
		for(int i=0; i<12; i++){
			for (int j = 0; j < 12; j++){
				cin >> matriz[i][j];
				if((j > i) && ((i+j) > 11)){
					soma+= matriz[i][j];
				}
			}
		}
		media= soma/30;
		printf("%.1lf\n", media);
	}

}	
