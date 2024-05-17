#include <iostream>
using namespace std;
class find_area{
    private:
        int length,width,area;
    public:
        find_area()
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
    
}
