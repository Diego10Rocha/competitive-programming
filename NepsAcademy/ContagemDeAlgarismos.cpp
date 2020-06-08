#include<bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	
	int n, zero=0, um=0, dois=0, tres=0, quatro=0, 
	cinco=0, seis=0, sete=0, oito=0, nove=0;
	
	cin >> n;
	
	string numeros[n];
	
	for(int i = 0; i < n; i++){
	
		cin >> numeros[i];
		
		for(int j = 0; j < numeros[i].size(); j++){
		
			if(numeros[i][j] == '0')
				zero++;
			else if(numeros[i][j] == '1')
				um++;
			else if(numeros[i][j] == '2')
				dois++;
			else if(numeros[i][j] == '3')
				tres++;
			else if(numeros[i][j] == '4')
				quatro++;
			else if(numeros[i][j] == '5')
				cinco++;
			else if(numeros[i][j] == '6')
				seis++;
			else if(numeros[i][j] == '7')
				sete++;
			else if(numeros[i][j] == '8')
				oito++;
			else if(numeros[i][j] == '9')
				nove++;
		}
	}
	
	cout << "0 - " << zero << endl 
	<< "1 - " << um << endl
	<< "2 - " << dois << endl
	<< "3 - " << tres << endl
	<< "4 - " << quatro << endl
	<< "5 - " << cinco << endl
	<< "6 - " << seis << endl
	<< "7 - " << sete << endl
	<< "8 - " << oito << endl
	<< "9 - " << nove << endl;
}
