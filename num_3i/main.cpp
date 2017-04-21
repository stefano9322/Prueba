#include <iostream>

using namespace std;

int main()
{
    int n;

    while (n!=-1){
        cout<<"Ingrese numero"<<endl;
        cin>>n;

        if (n%2==0){
            cout<<n<< " Es par"<<endl;
        }
        else{
            cout<<n<<" Es Impar "<<endl;
        }
    }
    cout<<"Escape"<<endl;
    return 0;
}
