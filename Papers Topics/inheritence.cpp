#include <iostream>
using namespace std;
class numbers{
    protected:
        int num1,num2;
        public:
        void input()
        {
            cout<<"Enter first number ";
            cin>>num1;
            cout<<"Enter second number ";
            cin>>num2;
        }
};
class product: public numbers{
    int product;
    public:
    void multiply()
    {
        product=num1*num2;
        cout<<"product is : "<<product;
    }
};
int main()
{
    product obj;
    obj.input();
    obj.multiply();
}