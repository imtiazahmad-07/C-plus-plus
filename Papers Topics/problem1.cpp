#include <iostream>
using namespace std;
class person{
    public:
    int age;
    string name;
    string address;
    public:
    void input()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your age : ";
        cin>>age;
        cout<<"Enter your address : ";
        cin>>address;
    }
    void output()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Address : "<<address<<endl;
    }

};
int main()
{
    person imtiaz,waseem,haroon;
    imtiaz.input();
    imtiaz.output();
    waseem.input();
    waseem.output();
    haroon.input();
    haroon.output();

}