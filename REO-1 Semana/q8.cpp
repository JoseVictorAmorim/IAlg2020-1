#include <iostream>
using namespace std;

float verif(float m1,float m2,float m3){
	float total = ((m1*100)+(m2)+(m3));
	return total;
}
	
int main(){
	float cmi, mi, mmi;
	cin >> cmi >> mi >> mmi;
	float totalideal = verif(cmi, mi, mmi);

	float cmc, mc, mmc;
	cin >> cmc >> mc >> mmc;
	float totalcarro = verif(cmc, mc, mmc);
	
	if(totalcarro <= (totalideal+(totalideal*0.01)))
		cout << "sim" << endl;
	else
		cout << "nao" << endl;

	return 0;
}
