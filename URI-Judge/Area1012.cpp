#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define dbg cout<<"debug\n"
using namespace std;
 
int main() {
 
    double A, B, C, atri, acirc, atrap, aquad, aret;
    cin>>A>>B>>C;
    atri=A*C/2;
    acirc=3.14159*C*C;
    atrap=(A+B)*C/2;
    aquad=B*B;
    aret=A*B;
    cout << fixed << setprecision(3);
    cout<<"TRIANGULO: "<<atri<<endl;
    cout<<"CIRCULO: "<<acirc<<endl;
    cout<<"TRAPEZIO: "<<atrap<<endl;
    cout<<"QUADRADO: "<<aquad<<endl;
    cout<<"RETANGULO: "<<aret<<endl;
}
