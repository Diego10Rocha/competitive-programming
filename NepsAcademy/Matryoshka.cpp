#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	
	int n, contador = 0;
	
	cin >> n;
	
	int v[n], aux[n];
	vector<int> posicoes;
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
		aux[i] = v[i];
	}
	
	sort(aux, aux+n);
	
		
	for(int i = 0; i < n; i++){
		
		if(v[i] != aux[i]){
			posicoes.push_back(aux[i]);
			contador++;
		}
	}
	
	cout << contador << endl;
	
	for(int i = 0; i < posicoes.size(); i++){
		cout << posicoes[i] << " ";
	}
	
	cout << endl;
}
