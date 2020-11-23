#include <iostream>
using namespace std;

int main(){
	int custoFab, custoC;
	cin >> custoFab;
	if (custoFab <= 20000){
		custoC = custoFab + (custoFab*0.05);
		cout << custoC << endl;
	}
	else if ((custoFab > 20000) and (custoFab <= 40000)){
		custoC = custoFab + (custoFab*0.1);
		cout << custoC + (custoC*0.3) << endl;
	}
	else if (custoFab > 40000){
		custoC = custoFab + (custoFab*0.15);
		cout << custoC + (custoC*0.45) << endl;
	}
	return 0;
}
