#include <iostream>

using namespace std;

/*void insercion(int arreglo[], int tam)
{
    if (n>1)
    {
        insercion (arreglo, tam-1)
        int x=arreglo[tam];
        int j=n-1;
         while (j>=0 && array[j]>x)
         {
             array[j+1]=array[j];
             j=j-1;
         }
         array[j+1]=x;
    }
}
*/
void insercion (int arreglo[], int tam)
{
    for (int i=1; i<tam;i++)
    {
        int j;

        j=i;

        while (j>0 && arreglo[j-1]>arreglo[j])
        {
            int temporal=arreglo[j];
            arreglo[j]=arreglo[j-1];
            arreglo[j-1]=temporal;
            j--;

        }

    }

}

int main ()
{
    int tam, n;
    cout<<"Ingrese el tamanho del arreglo"<<endl;
    cin>>tam;
    int arreglo[tam];
    for (int i=0;i<tam;i++){
        cout<<"Ingrese los numeros"<<endl;
        cin>>arreglo[n];
    }

    insercion(arreglo,tam);
    cout<<arreglo<<endl;
    return 0;
}
