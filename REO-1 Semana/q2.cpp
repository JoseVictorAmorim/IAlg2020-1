#include <iostream>
using namespace std;

int main(){
	int codProd;
	cin >> codProd;
	int precoQuilo;
	if ((codProd > 9) and (codProd < 21)){
		precoQuilo = 100;
	}
	else if ((codProd > 20) and (codProd < 31)){
		precoQuilo = 250;
	}
	else if ((codProd > 30) and (codProd < 41)){
		precoQuilo = 340;
	}
	int estado;
	cin >> estado;
	double imposto = 0;
	
	if (estado == 1)
		imposto = 0.35;
	else if (estado == 2)
		imposto = 0.25;
	else if (estado == 3)
		imposto = 0.15;
	else if (estado == 4)
		imposto = 0.05;
	
	double pesoT;
	cin >> pesoT;
	double pesoQ = pesoT * 1000;
	double precoF = pesoQ * precoQuilo;
	
	cout << pesoQ << endl;
	cout << precoF << endl;
	cout << (precoF * imposto) << endl;
	cout << precoF + (precoF * imposto) << endl;
	
	return 0;
}
	
