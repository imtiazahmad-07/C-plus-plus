#include <iostream>
using namespace std;
int main(){
        int matrix[2][2];
        cout<<"Enter the elements of matrix :"<<endl;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>matrix[i][j];
            }
        }
        cout<<"You entered the elements, below is the 2x2 matrix"<<endl;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
}