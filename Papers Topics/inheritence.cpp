#include <iostream>
using namespace std;
class numbers{          //declaring a class
    protected:          //access specifier for data members
        int num1,num2;      
        public:         //access specifier for member function
        void input()    //creating a member function
        {
            cout<<"Enter first number ";
            cin>>num1;
            cout<<"Enter second number ";
            cin>>num2;
        }
};
class product: public numbers{          //structure to inherit the properties of class "numbers"
    int product;            
    public:
    void multiply()
    {
        product=num1*num2;              //accessing the protected data members due to inheritence 
        cout<<"product is : "<<product;
    }
};
int main()
{
    product obj;
    obj.input();            //calling input member function
    obj.multiply();         //calling multiply function of which inherited the above class' member function
}