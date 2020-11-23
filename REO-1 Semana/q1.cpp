#include <iostream>
using namespace std;

int main(){
	float pprod;
	cin >> pprod;
	float pfinal;
	cout.precision(2);
	if (pprod < 50){	
		pfinal = pprod + (pprod*0.05);
		cout << fixed << pfinal << endl;
	}
	else if ((pprod >= 50) and (pprod <= 100)){
		pfinal = pprod + (pprod*0.1);
		cout << fixed << pfinal << endl;
	}
	else if (pprod > 100){
		pfinal = pprod + (pprod*0.15);
		cout << fixed << pfinal << endl;
	}
	
	if (pfinal <= 80)
		cout << "Barato" << endl;
	else if ((pfinal > 80) and (pfinal <= 120))
		cout << "Normal" << endl;
	else if ((pfinal > 120) and (pfinal <= 200))
		cout << "Caro" << endl;
	else if (pfinal > 200)
		cout << "Muito caro" << endl;
	
	return 0;	
}



