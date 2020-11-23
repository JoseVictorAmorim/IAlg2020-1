#include <iostream>
using namespace std;

int main(){
	float hExtra, hFalta;
	cin >> hExtra >> hFalta;
	float H = (hExtra - ((2/3)*(hFalta)))*60;
	if (H > 2400)
		cout << 500 << endl;
	else if ((H>1800) and (H <= 2400))
		cout << 400 << endl;
	else if ((H>1200) and (H <= 1800))
		cout << 300 << endl;
	else if ((H>600) and (H <= 1200))
		cout << 200 << endl;
	else if (H<=600)
		cout << 100 << endl;
		
	return 0;
}
