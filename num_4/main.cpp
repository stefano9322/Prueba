#include <iostream>
#include<cmath>

using namespace std;

double potencia (double &x, int &y)
{
    double potencia;
    potencia = pow (x,y);
    return potencia;
}

int main ()
{
    double a;
    int b;
    cout<<"Ingrese base y el exponente respectivamente"<<endl;
    cin>>a>>b;

    cout<<a<< " ^ "<<b<< " = "<<potencia(a,b)<<endl;
    return 0;
}
