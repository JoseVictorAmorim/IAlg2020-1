#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct contagem{
	float tempo[8];
};

int main(){
	contagem* atletas = new contagem;
	cout.precision(1);
	for(int i = 0; i < 8; i++){
		cin >> atletas->tempo[i];
	}
	
	float menorTempo = atletas->tempo[0];
	
	for(int i = 1; i < 8; i++){
		if(atletas->tempo[i] < menorTempo){
			menorTempo = atletas->tempo[i];
		}
	}
		
	contagem* diferenca = new contagem;
	
	for(int i = 0; i < 8; i++){
		if(atletas->tempo[i] != menorTempo){
			diferenca->tempo[i] = atletas->tempo[i] - menorTempo;
		}else{
			diferenca->tempo[i] = menorTempo;
		}
		cout << fixed << diferenca->tempo[i] << endl;
	}
	
	delete[] diferenca;
	delete[] atletas;
	return 0;
}

