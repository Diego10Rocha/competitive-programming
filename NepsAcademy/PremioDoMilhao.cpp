#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, a, i=1, aux=0, ndias, aux2=0;
	cin>>n;
	
	while(i<=n){
	
		cin>>a;
		aux+=a;
		
		if(aux>=1000000 && aux2==0){
			ndias=i;
			aux2++;
		}
		
		i++;
	}
	
	cout<<ndias;

}
