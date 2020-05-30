#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, a, b, auxa=0, auxb=0, interruptor;
	cin>>n;
	
	for(int i=0; i<n;i++){
		cin>>interruptor;
		
		if(interruptor == 1)
			auxa++;
		else{
			auxa++;
			auxb++;
		}
	}
	
	if(auxa%2==0)
		cout<<"0"<<endl;
	else
		cout<<"1"<<endl;
		
	if(auxb%2==0)
		cout<<"0"<<endl;
	else
		cout<<"1"<<endl;

}
