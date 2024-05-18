#include <iostream>
using namespace std;
class calculator                //declaring a class
{
private:                        //access specifier for data members
    int first, second;


    public:             //access specifier for member function 
    int add()           //declaring a member function
    {
        return first + second;      //adding to numbers and returning these to the member function
    }
};
int main()
{
    
}