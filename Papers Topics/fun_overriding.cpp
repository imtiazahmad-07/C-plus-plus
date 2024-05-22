#include <iostream>
using namespace std;
class class1
{
public:
    void message()          //created a public member function
    {
        cout<<"Hi"<<endl;
    }
};
class class2: public class1{    //inheriting the  properties of class 1 to class 2
    public:
    void message(){             //declaring a function 
        cout<<"Hello"<<endl;
    }
};



int main()
{
    class2 obj;         //declaring an object
    obj.class1::message();  //the function of class1 will be called 
    obj.message();          //the function of class2 will be called

}