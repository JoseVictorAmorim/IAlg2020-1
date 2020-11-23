#include <iostream>
using namespace std;

int main(){
	int kmTotal, maxVet;
	cin >> kmTotal;
	maxVet = kmTotal+1;
	
	string p1;
	cin >> p1;
	float vetP1[maxVet] = {0};
	for (int i = 1; i<maxVet; i++){
		cin >> vetP1[i];
	}
	
	string p2;
	cin >> p2;
	float vetP2[maxVet] = {0};
	for(int i = 1; i<maxVet; i++){
		cin >> vetP2[i];
	}

	
	for(int i = 1; i<maxVet; i++){
		if(vetP1[i] < vetP2[i])
			cout << p1 << " ";
		else{
			cout << p2 << " ";
		}
	}
	
	cout << endl;
	
	float trechop1, trechop2;
	for(int i=1; i< maxVet; i++){
		trechop1 = vetP1[i]-vetP1[i-1];
		trechop2 = vetP2[i]-vetP2[i-1];
		if(trechop1 < trechop2)
			cout << p1 << " ";
		else{
			cout << p2 << " ";
		}
	}	
	return 0;
}
