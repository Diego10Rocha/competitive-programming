#include<bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	desync;
	int n, acertos=0;
	string gabarito, resposta;
	
	cin >> n;
	cin >> gabarito;
	cin >> resposta;
	
	for(int i = 0; i < n; i++){
		if(gabarito[i] == resposta[i])
			acertos++;
	}
	
	cout << acertos << endl;
}
