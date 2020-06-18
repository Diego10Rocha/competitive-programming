#include<bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define endl '\n'

using namespace std;

int fibonacci(int n){
	if(n <= 1){
		return 1;
	}
	
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	desync;
	
	int n;
	
	cin >> n;
	
	cout << fibonacci(n) << endl;
}
