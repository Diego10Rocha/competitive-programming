#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define dbg cout<<"debug\n"
int main() {
	int a, b, c, maiorAB, maior;
	cin >> a >> b >> c;
	
	maiorAB = (a+b+abs(a-b))/2;
	maior = (maiorAB + c + abs(maiorAB-c))/2;
	
	cout << maior << " eh o maior" <<endl;
}
