#include <iostream>
#include <cmath>
using namespace std;

float jCompostos(float C, float i, float t){
		float montante = C * (pow((1+(i/100)), t));
		return montante;
}

int main(){
	float inicial, taxa;
	int tempo;
	cin >> inicial >> taxa >> tempo;
	cout.precision(2);
	
	cout << fixed << jCompostos(inicial, taxa, tempo) << endl;
	return 0;
}
