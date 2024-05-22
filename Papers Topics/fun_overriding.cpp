#include <iostream>
using namespace std;
class class1
{
public:
    void message()
    {
        cout<<"Hi"<<endl;
    }
};
class class2: public class1{
    public:
    void message(){
        cout<<"Hello"<<endl;
    }
};



int main()
{
    class2 obj;
    obj.class1::message();
    obj.message();

}