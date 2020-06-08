#include<bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;

	int n, P, Q, resultado;
	char expressao, aux;
	
	cin >> n;
	cin >> P >> expressao >> Q;
	
	if(expressao == '+')
		resultado = P + Q;
	else
		resultado = P * Q;
	
	if(resultado > n)
		cout << "OVERFLOW" << endl;
	else
		cout << "OK" << endl;
}
