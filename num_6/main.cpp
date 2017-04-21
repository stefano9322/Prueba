#include <iostream>

using namespace std;

int main()
{
    char operador;
    double a, b;

    cout<<" Digite el operador (*,/,+,-) y dos numeros separados por espacio"<<endl;
    cin>>operador>>a>>b>>;
    switch (operador)
    {
        case '*': cout<<a<<"*"<<b<<"="<<a*b<<endl;break;
        case '/': cout<<a<<"/"<<b<<"="<<a/b<<endl;break;
        case '+': cout<<a<<"+"<<b<<"="<<a+b<<endl;break;
        case '-': cout<<a<<"-"<<b<<"="<<a-b<<endl;break;
    }
    return 0;
}
