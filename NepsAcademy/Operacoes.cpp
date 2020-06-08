#include<bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	
	char operacao;
	double num1, num2, resultado;
	
	cin >> operacao;
	cin >> num1 >> num2;
	
	if(operacao == 'M')
		resultado = num1 * num2;
	else
		resultado = num1 / num2;
	
	cout << fixed << setprecision(2);
	cout << resultado << endl;
}
