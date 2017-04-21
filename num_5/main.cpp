#include <iostream>

using namespace std;

int main()
{
    int var;

    while (var!=-1){
    cout<<"Digite la opcion entre el 0-9"<<endl;
    cin>>var;
    switch (var)
    {
        case 0: cout<<"CERO"<<endl;break;
        case 1: cout<<"UNO"<<endl;break;
        case 2: cout<<"DOS"<<endl;break;
        case 3: cout<<"TRES"<<endl;break;
        case 4: cout<<"CUATRO"<<endl;break;
        case 5: cout<<"CINCO"<<endl;break;
        case 6: cout<<"SEIS"<<endl;break;
        case 7: cout<<"SIETE"<<endl;break;
        case 8: cout<<"OCHO"<<endl;break;
        case 9: cout<<"NUEVE"<<endl;break;
        default: cout<<"Numero no permitido"<<endl;
    }
    }
    cout<<"Termino el programa"<<endl;

    return 0;
}
