#include<bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;

	int n, v=0, aux, cont=1, maiorsequencia=0;
	cin>>n;
	
	for(int i=0; i<n; i++){
		aux=v;
		cin>>v;
		
		if(v==aux)
			cont++;
		else
			cont=1;
		
		if(cont > maiorsequencia)
			maiorsequencia = cont;
	}
	
	cout<<maiorsequencia<<endl;
}
