#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double c;
    cout<<setw(3)<<"Grados Farenheit"<<setw(23)<<"Grados Celsius"<<endl;
    for ( double f=0.0; f<=300.00; f+=20.00){
        c=(f-32)*5/9;

        cout<<setw(5)<<f<<setw(30)<<c<<endl;


    }
    return 0;
}
