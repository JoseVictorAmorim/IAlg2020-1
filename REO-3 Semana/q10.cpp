#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct cliente{
	string nomeCliente;
	int xCliente;
	int yCliente;
	int distanciaPizzaria;
	float valorPizza;
};

void insertion_sort(cliente vet[], int tamanho){
	cliente pivo;
	int j;
	for(int i = 1; i < tamanho; i++){
		pivo = vet[i];
		j = i-1;
		while((j >= 0) and (pivo.distanciaPizzaria < vet[j].distanciaPizzaria)){
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = pivo;
	}
}

int main(){
	int clientesAtendidos;
	cin >> clientesAtendidos;

	int xPizzaria, yPizzaria;
	cin >> xPizzaria >> yPizzaria;
	
	int numTotal;
	cin >> numTotal;
	
	cliente vetorClientes[numTotal];
	for(int i = 0; i < numTotal; i++){
		cin >> vetorClientes[i].nomeCliente;
		cin >> vetorClientes[i].xCliente;
		cin >> vetorClientes[i].yCliente;
		int x = xPizzaria - vetorClientes[i].xCliente;
		int y = yPizzaria - vetorClientes[i].yCliente;
		vetorClientes[i].distanciaPizzaria = sqrt((pow(x, 2)) + (pow(y,2)));
		cin >> vetorClientes[i].valorPizza;
	}
	
	insertion_sort(vetorClientes, numTotal); //ordenação por distancia
	
	float valorTotal = 0;
	for(int i = 0; i < clientesAtendidos; i++){
		valorTotal += vetorClientes[i].valorPizza;
	}
	
	cout.precision(2);
	cout << fixed << valorTotal;
	return 0;
}
