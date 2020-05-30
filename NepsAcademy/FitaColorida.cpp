#include<bits/stdc++.h>
# define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;

	int n, ZeroAnterior=0;
	cin>>n;
	int fita[n+2], v_aux[n];
	fita[0] = 0;
	fita [n+1] = 0;
	
	for(int i=1; i<=n; i++){
	
		cin>>fita[i];
	}
	
	for(int i = 0; i < n+1; i ++){
		
		if(fita[i]==0){
			
			for(int j = i ; j < n+1; j ++){
				v_aux[j-1] = j - i;
				if(v_aux[j-1] > 9)
					v_aux[j-1] = 9;
				if(fita[j]==0 && j > i)
					break;
			}
			
			for(int j = i; j > ZeroAnterior; j --){
				if(v_aux[j-1] > i - j || ZeroAnterior == 0)
					v_aux[j-1] = i - j;
				if(v_aux[j-1] > 9)
					v_aux[j-1] = 9;
			}
			
			ZeroAnterior = i;
				
		}
	}
	
	for(int i=0; i<n; i++)
		cout<<v_aux[i]<<" ";
		
	cout << endl;

}
