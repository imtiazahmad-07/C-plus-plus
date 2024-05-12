#include <iostream>
using namespace std;
int main()
{
    int array[5]={10,20,30,40,50};
    string names[5]={"imtiaz","waseem","haroon","kabeer","sohail"};
    for(int i=0; i<5; i++)
    {
        cout<<names[i]<<" got "<<array[i]<<" marks"<<endl;
    }
} 
