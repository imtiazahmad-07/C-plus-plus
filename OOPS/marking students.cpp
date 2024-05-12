#include <iostream>
using namespace std;
int main()
{
    int array[5]={10,20,30,40,50};                                        //Initializing the marks of Students   
    string names[5]={"imtiaz","waseem","haroon","kabeer","sohail"};       //intializing the names of students
    for(int i=0; i<5; i++)                                                //using a loop to print the arrays
    {
        cout<<names[i]<<" got "<<array[i]<<" marks"<<endl;                // printing the both arrays to show the names and marks of the students
    }
} 
