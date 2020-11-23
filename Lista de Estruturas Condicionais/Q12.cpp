#include <iostream>
#include <cmath>
using namespace std;
const float pi = 3;
int main(){
	char trig, forma;
	cin >> trig >> forma;
	float angulo;
	cin >> angulo;
	cout.precision(4);
	if (trig == 's'){
		if (forma == 'g')
		cout << sin(angulo*180/pi) << endl;
		else if (forma =='r')
		cout << fixed << sin(angulo) << endl;	
	}
	else if (trig == 'c'){
		if (forma == 'g')
		cout << cos(angulo*180/pi) << endl;	
		else if (forma == 'r')
		cout << fixed << cos(angulo) << endl;
	}
	return 0;
}
