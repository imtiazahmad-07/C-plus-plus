

//////////////////////////////========== Summing up two numbers using a local class =============////////////////////////////////////


#include <iostream>
using namespace std;
void function()         //declared and defined a function
{
    class sum{          //declared and defined a class
        private:        //used access specifier for data members
        int a,b;        //declared to values to sum up 
        public:         //access specifier for method function
        void input()    //defined a function to take input
        {
            cout<<"Enter first number : ";
            cin>>a;
            cout<<"Enter second number : ";
            cin>>b;
        }
        void display()  //defined a function to display the given input and sum of the numbers
        {
            cout<<a<<" + "<<b<<" = "<<endl;
        }
    };
    sum obj;    //declared an object for class "sum"
    obj.input();//called the mehtod function "input" by using a dot operator
    obj.display();//called the member/method function "display" through an object using dot operator
}
int main()
{
        function();   //called the function to display everything within the function including the local class      
} 
