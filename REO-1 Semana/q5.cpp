#include <iostream>
using namespace std;

int main(){
	double enerThanos, enerThor;
	cin >> enerThanos >> enerThor;
	int qtdeGolpes;
	do{
		enerThanos = enerThanos - (enerThanos*0.02);
		enerThor = enerThor - (enerThor*0.06);
		qtdeGolpes++;
	}while(enerThanos < enerThor);
	
	cout << qtdeGolpes << endl;
	return 0;
}
