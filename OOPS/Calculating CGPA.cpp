//======================================================A PRogram that calculates the the cgpa using oops concepts==========================================//
#include <iostream>
using namespace std;
class student_narks
{
public:
    float first_sem, second_sem, third_sem, fourth_sem, fifth_sem, sixth_sem, seventh_sem, eighth_sem, ninth_sem, tenth_sem, CGPA;
    void display()
    {
        cout << "Your CGpa is " << this->CGPA << endl;
    }
};
int main()
{
    student_narks marks; // declaring a variable for user defined data type
    int opt;
    up:
    cout << "how many semesters you have passed? ";
    cin >> opt;
    if (opt == 8 || opt == 10)
    {
        if (opt == 8)
        {
            cout << "The GPA in first semster is : ";
            cin >> marks.first_sem;
            cout << "The GPA in second semester is : ";
            cin >> marks.second_sem;
            cout << "The GPA in third semester is : ";
            cin >> marks.third_sem;
            cout << "The GPA in fourth semester is : ";
            cin >> marks.fourth_sem;
            cout << "The GPA in fifth semester is : ";
            cin >> marks.fifth_sem;
            cout << "The GPA in sixth semester is : ";
            cin >> marks.sixth_sem;
            cout << "The GPA in seventh semester is : ";
            cin >> marks.seventh_sem;
            cout << "The GPA in eighth semester is : ";
            cin >> marks.eighth_sem;
            marks.CGPA = (marks.first_sem + marks.second_sem + marks.third_sem + marks.fourth_sem + marks.fifth_sem + marks.sixth_sem + marks.seventh_sem + marks.eighth_sem) / 8;
            marks.display();
        }
        else if (opt == 10)
        {
            cout << "The GPA in first semster is : ";
            cin >> marks.first_sem;
            cout << "The GPA in second semester is : ";
            cin >> marks.second_sem;
            cout << "The GPA in third semester is : ";
            cin >> marks.third_sem;
            cout << "The GPA in fourth semester is : ";
            cin >> marks.fourth_sem;
            cout << "The GPA in fifth semester is : ";
            cin >> marks.fifth_sem;
            cout << "The GPA in sixth semester is : ";
            cin >> marks.sixth_sem;
            cout << "The GPA in seventh semester is : ";
            cin >> marks.seventh_sem;
            cout << "The GPA in eighth semester is : ";
            cin >> marks.eighth_sem;
            cout << "The GPA in ninth semester is : ";
            cin >> marks.ninth_sem;
            cout << "The GPA in tenth semester is : ";
            cin >> marks.tenth_sem;
            marks.CGPA = (marks.first_sem + marks.second_sem + marks.third_sem + marks.fourth_sem + marks.fifth_sem + marks.sixth_sem + marks.seventh_sem + marks.eighth_sem, marks.ninth_sem + marks.tenth_sem) / 10;
            marks.display();
        }
    }
    else if (opt == 6)
    {
        cout << "The GPA in first semster is : ";
        cin >> marks.first_sem;
        cout << "The GPA in second semester is : ";
        cin >> marks.second_sem;
        cout << "The GPA in third semester is : ";
        cin >> marks.third_sem;
        cout << "The GPA in fourth semester is : ";
        cin >> marks.fourth_sem;
        cout << "The GPA in fifth semester is : ";
        cin >> marks.fifth_sem;
        cout << "The GPA in sixth semester is : ";
        cin >> marks.sixth_sem;
        marks.CGPA = (marks.first_sem + marks.second_sem + marks.third_sem + marks.fourth_sem + marks.fifth_sem + marks.sixth_sem) / 6;
        marks.display();
    }
    else if (opt == 4)
    {
        cout << "The GPA in first semster is : ";
        cin >> marks.first_sem;
        cout << "The GPA in second semester is : ";
        cin >> marks.second_sem;
        cout << "The GPA in third semester is : ";
        cin >> marks.third_sem;
        cout << "The GPA in fourth semester is : ";
        cin >> marks.fourth_sem;
        marks.CGPA = (marks.first_sem + marks.second_sem + marks.third_sem + marks.fourth_sem) / 4;
        marks.display();
    }
    else if (opt == 2)
    {
        cout << "The GPA in first semster is : ";
        cin >> marks.first_sem;
        cout << "The GPA in second semester is : ";
        cin >> marks.second_sem;
        marks.CGPA = (marks.first_sem + marks.second_sem) / 2;
        marks.display();
    }
    else if ( opt < 2 || opt >10){
        cout<<"CGPA can't be calculated. Try again"<<endl;
        goto up;
    }
}
