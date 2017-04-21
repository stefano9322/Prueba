#include <iostream>

using namespace std;

void insercion(int lista, int tam)
{
    int j,x,y;
    for (int i=0;i<tam;i++)
    {

        x=lista[i];
        j=i;

        while ((y>0) && (lista[j-1]>x))
        {
            lista[j]=lista[j-1];
            j=j-1;
        }

    }
    lista[j]=x;
    return lista;
}
int main ()
{
    int lista [], tam=5;
    lista[tam]={3,5,1,87,23};
    cout<<insercion(lista, tam)<<endl;
    return 0;
}
