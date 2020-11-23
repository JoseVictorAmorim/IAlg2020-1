#include <iostream>
#include <fstream>
using namespace std;

int batalhaNaval(int** tabuleiro, int** tiros, int tamanho, int totalNavios){
	int restantes = 0, k = 0;

	for(int i = 0; i < tamanho; i++){
		for(int j = 0; j < tamanho; j++){
			if(tiros[i][j] == 1){
				if(tabuleiro[i][j] != 0){
					tabuleiro[i][j] = 0; //afundando as partes do navio atingido
				}
			}
		}
	}
	for(int i = 0; i < tamanho; i++){
		for(int j = 0; j < tamanho; j++){
			if((tabuleiro[i][j] != 0) and (tabuleiro[i][j] != k)){ //verificaçao se há navios restantes
				k = tabuleiro[i][j];
				restantes++;
			}
		}
	}
	int afundados = totalNavios-restantes;
	return afundados;
}

int main(){
	int** matriz1;
	int** matriz2;
	int nMatriz;

	ifstream batalha("BatalhaNaval.txt");

	if(batalha){
		while(!batalha.eof()){
			batalha >> nMatriz;
			
			matriz1 = new int*[nMatriz];
			for(int i = 0; i < nMatriz; i++){
				matriz1[i] = new int[nMatriz];
			}
	
			matriz2 = new int*[nMatriz];
			for(int i = 0; i < nMatriz; i++){
				matriz2[i] = new int[nMatriz];
			}
			
			for(int i = 0; i < nMatriz; i++){
				for(int j = 0; j < nMatriz; j++){
					batalha >> matriz1[i][j] ;
				}
			}
			for(int i = 0; i < nMatriz; i++){
				for(int j = 0; j < nMatriz; j++){
					batalha >> matriz2[i][j] ;
				}
			}
		}
	}
	
	int num_Navios = 0;
	for(int i = 0; i < nMatriz; i++){
		for(int j = 0; j < nMatriz; j++){
			if((matriz1[i][j] != 0) and (matriz1[i][j] != num_Navios)){ //numero de navios total
				if(matriz1[i][j] > num_Navios){
					num_Navios = matriz1[i][j];
				}
			}
		}
	}
	
	cout << batalhaNaval(matriz1, matriz2, nMatriz, num_Navios);
	
	for(int i = 0; i < nMatriz; i++){
		delete[] matriz1[i];
	}
	delete[] matriz1;
	
	for(int i = 0; i < nMatriz; i++){
		delete[] matriz2[i];
	}
	delete[] matriz2;
	
	return 0;
}

