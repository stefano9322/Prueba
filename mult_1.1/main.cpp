#include <iostream>

using namespace std;

void cambio (int *ptr, int *ptr2)
{
    int temp;
    temp=*ptr;
    *ptr=*ptr2;
    *ptr2=temp;
}

int main ()
{
    int x, y;
    cout<<"Ingrese las variables x e y respectivamente"<<endl;
    cin>>x>>y;

    int *ptr, *ptr2;
    ptr= &x, ptr2=&y;

    cambio(ptr,ptr2);
    cout<<x<<" "<<y<<endl;

    return 0;
}
