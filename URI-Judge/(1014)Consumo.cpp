#include <bits/stdc++.h>
using namespace std;
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define dbg cout<<"debug\n"
int main() {
	int distancia;
	double consumo_med, consumo;
	cin >> distancia >> consumo;
	
	consumo_med = distancia/consumo;
	cout << fixed << setprecision(3);
	cout << consumo_med << " km/l" <<endl;
}
