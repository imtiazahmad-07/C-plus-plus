#include <iostream>
using namespace std;
class find_area{     //created a class
    private:         //for data members to be accessed only by class itself
        int length,width,area; //declaring essentials
    public:         //for contructor to be accesseed publicly
        find_area() //creating a constructor function
        {
            cout<<"Enter length in meters : ";
            cin>>length;
            cout<<"Enter width in meters : ";
            cin>>width;
            area = length * width;
            cout<<"Area is "<<area<<" meters";
        }
};
int main()
{
    find_area obj;  //declaring the object only where the constructor has ability to call itself
}
