#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	int M[N][N];
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			cin >> M[i][j];
		}
	}
	int locais = 0;
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			if(((M[i][j])==0) and (j+4<N)){
				if((M[i][j+4] == 0)){
					locais++;
				}
			}
		}
	}
	
	cout << locais << endl;
	return 0;
}
