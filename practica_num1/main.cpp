#include <iostream>

using namespace std;

int main()
{
    cout << "convertir millas a kilometros" << endl;
    double m, k;
    cout<<"Ingrese las millas que desea convertir"<<endl;
    cin>>m;
    k=m*1.60934;
    cout<<m<<" millas son "<<k<< " kilometros"<<endl;

    return 0;
}
