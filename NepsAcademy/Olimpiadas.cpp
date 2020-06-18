#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

struct Paises{
	int id, ouro, prata, bronze;
};

int ordenacao(Paises a, Paises b){
	if(a.ouro != b.ouro)
		return a.ouro > b.ouro;
		
	else if(a.prata != b.prata)
		return a.prata > b.prata;
		
	else if(a.bronze != b.bronze)
		return a.bronze > b.bronze;
	
	return a.id < b.id;

}

int main(){
	desync;
	
	int n, m, ouro, prata, bronze;
	
	cin >> n >> m;
	
	Paises v[n];
	
	for(int i=0; i<n; i++){
		v[i].id = i+1;
		v[i].ouro = 0;
		v[i].prata = 0;
		v[i].bronze = 0;
	
	}
	
	for(int i=0; i<m; i++){
		cin >> ouro >> prata >> bronze;
		v[ouro-1].ouro ++;
		v[prata-1].prata ++;
		v[bronze-1].bronze ++;
	}
	
	sort(v, v+n, ordenacao);
	
	for(int i=0; i<n; i++){
		cout << v[i].id << " ";
	}
	cout << endl;
	
}
