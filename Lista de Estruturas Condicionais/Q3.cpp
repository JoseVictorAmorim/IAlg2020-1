#include <iostream>
using namespace std;

int main(){
	float plano, valor;
	cin >> plano;
	cin >> valor;
	float mont;
	cout.precision(2);
	if (plano == 1){
		mont = valor+(valor*0.005);
	}
	else if (plano == 2){
		mont = (valor+(valor*0.03))-30;
	}
	cout << fixed << mont << endl;
	return 0;
}
