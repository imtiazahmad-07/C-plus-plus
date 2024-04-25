#include <iostream>
using namespace std;
int main()
{
    int i;              //declaring variable for while loop
    bool keepgoing=true;//inithializing boolean for repetition
    char opt;           //dedlaring character
   
    while(keepgoing)    //initiating while loop
    {
         cout<<"Enter the nunber "; //output
         cin>>i;                    //input
        if(i%2==0)                  //starting if condition
        {
            cout<<"even";         // print if true
        }
        else{
            cout<<"odd";          //if false print this
        }
        cout<<endl;               //End the line
        i++;                      //increment
        cout<<"Do you want to continue? press 'Y' to run again, and to break the loop press 'n'\t ";               //print to ask user to continue again
        cin>>opt;                 //Taking input
        if(opt=='y' || opt=='Y')  //condition of asking
        {
            keepgoing;            //if true run again
        }
        else{
            break;                //if false break the loop
        }
    }
}