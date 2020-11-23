#include <iostream>
using namespace std;

int main(){
	int tamTabuleiro;
	cin >> tamTabuleiro;
	
	int tabuleiro[tamTabuleiro][tamTabuleiro];
	for(int i = 0; i<tamTabuleiro; i++){
		for(int j = 0; j<tamTabuleiro; j++){
			cin >> tabuleiro[i][j];
		}
	}
	int colunaCavalo = -1; 
	int linhaCavalo = -1;
	for(int i = 0; i<tamTabuleiro; i++){
		for(int j = 0; j<tamTabuleiro; j++){
			if((tabuleiro[i][j]) == 1){
				linhaCavalo = i;
				colunaCavalo = j;
			}
		}
	}
	
	int peoes = 0;
	
	if((linhaCavalo-2) >= 0 ){
		if((colunaCavalo+1) < tamTabuleiro){
			if((tabuleiro[linhaCavalo-2][colunaCavalo+1]) == 2)
				peoes++;
		}
		if((colunaCavalo-1) >= 0){
			if((tabuleiro[linhaCavalo-2][colunaCavalo-1]) == 2)
				peoes++;
		}
	}
	
	if((linhaCavalo-1) >= 0 ){
		if((colunaCavalo+2) < tamTabuleiro){
			if((tabuleiro[linhaCavalo-1][colunaCavalo+2]) == 2)
				peoes++;
		}
		if((colunaCavalo-2) >= 0){
			if((tabuleiro[linhaCavalo-1][colunaCavalo-2]) == 2)
				peoes++;
		}
	}
	
	if((linhaCavalo+1) < tamTabuleiro){
		if((colunaCavalo+2) < tamTabuleiro){
			if((tabuleiro[linhaCavalo+1][colunaCavalo+2]) == 2)
				peoes++;
		}
		if((colunaCavalo-2) >= 0){
			if((tabuleiro[linhaCavalo+1][colunaCavalo-2]) == 2)
				peoes++;
		}
	}
	
	if((linhaCavalo+2) < tamTabuleiro){
		if((colunaCavalo+1) < tamTabuleiro){
			if((tabuleiro[linhaCavalo+2][colunaCavalo+1]) == 2)
				peoes++;
		}
		if((colunaCavalo-1) >= 0){
			if((tabuleiro[linhaCavalo+2][colunaCavalo-1]) == 2)
				peoes++;
		}
	}
	
	cout << peoes << endl;
	return 0;
}
