#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int hora1, min1, hora2, min2;
	cin >> hora1 >> min1 >> hora2 >> min2;
	int horaf, minf;
	if (hora2 >= hora1){
		horaf = abs(hora2-hora1);
	}
	else{
		horaf = (24 - hora1) + hora2;
	}
	if (min2 >= min1)
		minf = abs(min2 - min1);
	else
		minf = (60-min1) + min2;
	cout << horaf << " " << minf << endl;
	return 0;
}
