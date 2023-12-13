#include <iostream>
using namespace std;
int main()
{
	// Introduction to a person using data types and taking inputs
	int age,qualification;
	string name,address,nic;
	float marks_percentage;
	cout<<"What's your name ? \n";
	cin>>name;
	cout<<"Where do you live ? \n";
	cin>>address;
	cout<<"What's your qualification?\n ";
	cin>>qualification;
	cout<<"Enter your NIc (Without spaces)\n";
	cin>>nic;
	cout<<"Your pecentage of class "<<qualification<<"?\n";
	cin>>marks_percentage;
	return 0;
}