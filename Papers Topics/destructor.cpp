#include <iostream>
using namespace std;
int count=0;
class check{
    
    public:
    check()  //declaring the constructor
    {
        cout<<"Obj "<<++count<<" allocated space"<<endl;
    }
    ~check() //declaring the destructor which deallocated the space in memory
    {
        cout<<"Obj "<<count--<<" deallocated the space"<<endl;
    }
};
int main()
{
    check obj1,obj2; //creating objects to check the destructor which works in the reverse order
}