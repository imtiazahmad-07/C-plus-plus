#include <iostream>
#include <windows.h>        //This library supports the text attributes function
using namespace std;
int main()
{
    int number;         //declaring number
    cout<<"How much hearts you wanna print? ";
    cin>>number;
    for(int loop_var=1; loop_var<=number; loop_var++) //using loop
    {
        for(int inside_loop=1; inside_loop<loop_var; inside_loop++) //nested loop
        {
               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); //used this function to change the color of the text
            cout<<"\3";
           
        }

        cout<<endl;
    }
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
