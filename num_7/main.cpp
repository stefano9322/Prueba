#include <iostream>

using namespace std;

void cambio ( int &x, int &y)
{
    int temporal;
    temporal=x;
    x=y;
    y=temporal;

}

int main ()
{
    int x, y;
    cout<<"Ingrese numero int para x e y"<<endl;
    cin>>x>>y;
    cambio (x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
