#include <iostream>
using namespace std;
int main()
{
    float Celcius;
    float Farenhiet;
    
    cout<<"input temperature in Celsius: "<<endl;
    cin>>Celcius;

    Farenhiet = (Celcius * 9 / 5) + 32;

    cout<<Celcius<<" Celsius = "<<Farenhiet<<" Fahrenheit"<<endl;

    return 0;
}
