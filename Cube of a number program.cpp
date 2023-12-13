#include <iostream>
using namespace std;
int main()
{
	int any_num,result;
	cout<<"Enter the number to find it's cube\t"<<endl;
	cin>>any_num;
	result=any_num*any_num*any_num;
	cout<<"The cube of "<<any_num<<" is "<<result<<endl;
	getch();
	return 0;
}