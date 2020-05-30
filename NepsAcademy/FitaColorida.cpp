#include<bits/stdc++.h>
# define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;

	int n, cont=0, aux=0, cont2=0, ZeroAnterior=0;
	cin>>n;
	int fita[n+2], v_aux[n];
	
	fita[0] = 0;
	/*for(int i=1; i<=n; i++){
	
		fita[i] == 0;
	}*/
	fita [n+1] = 0;
	
	for(int i=1; i<=n; i++){
	
		cin>>fita[i];
	}
	
	for(int i=0; i<n+2; i++)
		cout<<fita[i]<<endl;
	
	for(int i = 0; i < n+1; i ++){
	
		if(fita[i]==0){
			
			for(int j = i; j > ZeroAnterior; j --){
				
				v_aux[j-1] = i - j;
				cout << i - j<<"<-- i:"<<i<<"j:"<<j<<endl;
			}
			
			
			ZeroAnterior = i;
		}
	}
	
	for(int i=0; i<n; i++)
		cout<<v_aux[i];
	
	for(int i = 0; i < n; i ++){
	
		if(fita[i]==0){
			
			for(int j = i; j < n+2; j ++){
				if(v_aux[j] > j - i){
					v_aux[j-1] = j - i;
				
					cout << j - i<<"--> i:"<<i<<"j:"<<j<<endl;
				
				}
			}
		}
		
	}
	
	for(int i=0; i<n; i++)
		cout<<v_aux[i];
}
