#include <iostream>
using namespace std;
class fun_overload{                 //declaring a class named "fun_overloaded"
    private:
    int num1,num2,sum,product;      //declaring the data members of the class
    public:                         //access specifiying for member/method function
        void fun()                  //defining a member function
        {
            cout<<"Enter two numbers : ";
            cin>>num1>>num2;
            sum=num1+num2;
            cout<<"Sum is "<<sum<<endl;
        }
        void fun(int a,int b){      //defining another member funcction of same name with parameters 
            cout<<"Enter two numbers: ";
            cin>>a>>b;
            product=a*b;
            cout<<"product is : "<<product<<endl;
        }
};
int main()
{
    fun_overload obj;           //declaring an object
    obj.fun();                  //calling the member function of class fun_overloaded
    obj.fun(2,3);               //calling the second member function fo class fun_oveloaded

}