#include <iostream>
using namesapcae std; 
int main()
{
  int sum=0;                         //initialize sum with zero value
  for(int i=1; i<=15; i++)          //given that : sum up the numbers form 1 to 15 and for that we uses for loop 
    {
      sum=sum+i;                    //with each iteration the variable "sum" adds its own and the variable of loop
    }
  cout<<"Sum is : "<<sum<<endl;     //printing the values which are added from 1 to 5 whose output becomes "Sum is : 64"
}
