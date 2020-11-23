#include <iostream>
using namespace std;

int main(){
	int datual, hatual, matual, duracao;
	cin >> datual >> hatual >> matual >> duracao;
	int dfinal = datual + (duracao/1440);
	int horasR = ((duracao%1440)/60);
	int hfinal = hatual + horasR;
	int minR = (duracao%1440)%60;
	int mfinal = matual + minR;
	if (mfinal >= 60){
		hfinal++;
		mfinal = mfinal-60;
	}
	if (hfinal >= 24){
		dfinal++;
		hfinal = hfinal-24;
	}
	cout << dfinal << " " << hfinal << " " << mfinal << endl;
	return 0;
}
