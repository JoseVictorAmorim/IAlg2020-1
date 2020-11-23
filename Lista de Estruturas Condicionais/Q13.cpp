#include <iostream>
using namespace std;

int main(){
	int codigo, qtde;
	cin >> codigo >> qtde;
	int valorTot;
	if ((codigo >= 1) and (codigo <= 10)){
		valorTot = qtde * 10;
		cout << 10 << endl << valorTot << endl;
	}
	else if ((codigo >= 11) and (codigo <= 20)){
		valorTot = qtde * 15;
		cout << 15 << endl << valorTot << endl;
	}
	else if ((codigo >= 21) and (codigo <= 30)){
		valorTot = qtde * 20;
		cout << 20 << endl << valorTot << endl;
	}
	else if ((codigo >= 31) and (codigo <= 40)){
		valorTot = qtde * 30;
		cout << 30 << endl << valorTot << endl;
	}
	if (valorTot < 250)
		cout << valorTot*0.05 << endl << valorTot-(valorTot*0.05) << endl;
	else if ((valorTot >= 250) and (valorTot <= 500))
		cout << valorTot*0.1 << endl << valorTot-(valorTot*0.1) << endl;
	else if (valorTot > 500)
		cout << valorTot*0.15 << endl << valorTot-(valorTot*0.15) << endl;
	
	return 0;
}
