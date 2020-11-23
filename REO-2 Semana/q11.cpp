#include <iostream>
using namespace std;

int main(){
	int nTotal;
	cin >> nTotal;
	
	float alturas[nTotal][nTotal];
	for(int i = 0; i<nTotal; i++){
		for(int j = 0; j<nTotal; j++){
			cin >> alturas[i][j];
		}
	}
	
	float limite;
	cin >> limite;
	
	float custo;
	cin >> custo;
	
	float totalAbaixo = 0;
	for(int i = 0; i<nTotal; i++){
		for(int j = 0; j<nTotal; j++){
			if((alturas[i][j])<=limite){
				totalAbaixo += limite-(alturas[i][j]);
			}
		}
	}
	cout.precision(2);
	cout << fixed << float(totalAbaixo*custo) << endl;	
	return 0;
}
