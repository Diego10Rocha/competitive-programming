#include<bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	
	string riso, aux="";
	bool igual = true;
	
	cin >> riso;
	
	int tam = riso.size();
	
	for(int i = 0; i < tam; i++){
		if(riso[i] == 'a' || riso[i] == 'e' 
		|| riso[i] == 'i' || riso[i] == 'o' 
		|| riso[i] == 'u')
			aux += riso[i];
	}
	
	tam = aux.size();
	for(int i = 0; i < tam-1; i++){
		if(aux[i] != aux[tam - i - 1])
			igual = false;
	}
	
	if(igual)
		cout << "S" << endl;
	else
		cout << "N" << endl;

}
