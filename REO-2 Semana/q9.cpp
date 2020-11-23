#include <iostream>
using namespace std;

int main(){
	int L, C;
	cin >> L >> C;
	int matriz[L][C];
	for(int i = 0; i<L; i++){
		for(int j = 0; j<C; j++){
			cin >> matriz[i][j];
		}
	}
	
	int linha1, coluna1;
	cin >> linha1 >> coluna1;
	
	int quadrante;
	cin >> quadrante;
	
	int soma = 0;
	if(quadrante == 1){
		for(int i = 0; i<linha1; i++){
			for(int j = 0; j<coluna1; j++){
				soma += matriz[i][j];
			}
		}
	}
	if(quadrante == 2){
		for(int i = 0; i<linha1; i++){
			for(int j = (C-1); j>coluna1; j--){
				soma += matriz[i][j];
			}
		}
	}
	if(quadrante == 3){
		for(int i = (L-1); i>linha1; i--){
			for(int j = 0; j<coluna1; j++){
				soma += matriz[i][j];
			}
		}
	}	
	if(quadrante == 4){
		for(int i = (L-1); i>linha1; i--){
			for(int j = (C-1); j>coluna1; j--){
				soma += matriz[i][j];
			}
		}
	}	
	
	cout << soma << endl;
	
	return 0;
}
