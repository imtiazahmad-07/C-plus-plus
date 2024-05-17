#include <iostream>
using namespace std;
class person{           //declared a class with a name "Person"
    public:             //access specifier for data members (means for the variables)
    int age;             
    string name;
    string address;
    public:             //acess specifier for method funtions
    void input()        //declared and defined the method function for getting input from user
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your age : ";
        cin>>age;
        cout<<"Enter your address : ";
        cin>>address;
    }
    void output()       //declared and defined the method function for giving user's data as an output 
    {
        cout<<"\t Name : "<<name<<ends;
        cout<<"\t Age : "<<age<<ends;
        cout<<"\t Address : "<<address<<ends;       //here ends is used to have an space 
        cout<<endl;
    }

};
int main()
{
    person person1,person2,person3; //using class "person" to create three objects person1,2,3
    person1.input();                //person1's input data
    person1.output();               //person1's output data
    person2.input();                //person2's input data
    person2.output();               //person2's output data
    person3.input();                //person3's input data
    person3.output();               //person3's output data

}