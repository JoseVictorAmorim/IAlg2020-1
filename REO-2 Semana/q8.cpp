#include <iostream>
using namespace std;

int main(){
	float custoTransporte[4][4];
	for(int i = 0; i<4; i++){
		for(int j = 0; j<4; j++){
			cin >> custoTransporte[i][j];
		}
	}
	
	int totalCidades;
	cin >> totalCidades;
	

	int identificadorC[totalCidades];
	for(int i = 0; i<totalCidades; i++){
		cin >> identificadorC[i];
	}
	
	float custoTotal = 0;
	int contador = 0;
	for(int i = 0; i<totalCidades-1; i++){
		int x = identificadorC[contador];
		int y = identificadorC[contador+1];
		custoTotal += custoTransporte[x][y];
		x = 0;
		y = 0;
		contador++;
	}
	cout << custoTotal << endl;
	return 0;
}
