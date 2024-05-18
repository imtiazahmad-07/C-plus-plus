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
     friend int add_numbers(calculator, int a, int b);  
};
int add_numbers(calculator obj, int a, int b)   //defining the friend function and here we ceate an object of the above class to access the private data members
{
    obj.first = a; //storing the value of a in private data member "first" by using an object
    obj.second= b;
    ////storing the value of b in private data member "second" by using an object
    return obj.add(); //calling the member function to add the both numbers
}
int main()
{
    
}