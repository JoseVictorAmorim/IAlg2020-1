#include <iostream>
using namespace std;

int main(){
	float salarioB;
	int	tempoS;
	cin >> salarioB >> tempoS;
	float imposto;
	if (salarioB < 200){
		imposto = 0;
	}
	else if ((salarioB >= 200) and (salarioB <= 450)){
		imposto = salarioB * 0.03;
	}
	else if ((salarioB > 450) and (salarioB < 700)){
		imposto = salarioB * 0.08;
	}
	else if ((salarioB >= 700)){
		imposto = salarioB * 0.12;
	}
	float grat;
	if (salarioB > 500){
		if (tempoS <= 3){
			grat = salarioB * 0.2;
		}
		else if (tempoS > 3){
			grat = salarioB * 0.3;
		}
	}
	else if (salarioB <= 500){
		if (tempoS <= 3){
			grat = salarioB * 0.23;
		}
		else if ((tempoS > 3) and (tempoS < 6)){
			grat = salarioB * 0.35;
		}
		else if (tempoS <= 6){
			grat = salarioB * 0.33;
		}
	}
	float salarioL =(salarioB - imposto) + grat;
	char classe;
	if (salarioL < 350){
		classe = 'A';
	}
	else if ((salarioL >= 350) and (salarioL < 600)){
		classe = 'B';
	}
	else if (salarioL >= 600){
		classe = 'C';
	}
	cout << imposto << endl << grat << endl << salarioL << endl << classe;
	
	return 0;
}
