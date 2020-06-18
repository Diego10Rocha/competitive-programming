#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int procedimentoTorre(int n){

	if(n == 1){
		return 1;
	}
	return 1 + 2 * procedimentoTorre(n-1);
}

int main(){

	int n, teste=0;
	
	cin >> n;
	while(n != 0){
	
		teste++;
		
		cout << "Teste " << teste << endl 
		<< procedimentoTorre(n) << endl;
		cin >> n;
		
	}
}
