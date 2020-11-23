#include <iostream>
#include <cstring>
using namespace std;

int main(){
		string texto;
		cin >> texto;
		
		int tamanhoTexto = texto.size();
	
		bool aux = true;
		int cont = 0;
		int repeticoes = 0;
		char naoRepetida;
		
		while((cont < tamanhoTexto) and (aux)){
			for(int i = 0; i < tamanhoTexto; i++){
				if((texto[cont] == texto[i]) and (i != cont))
					repeticoes++;
			}
			if(repeticoes == 0){
				naoRepetida = texto[cont];
				aux = false;
			}
			repeticoes = 0;
			cont++;
		}
		
		cout << naoRepetida << endl;
	return 0;
	}
