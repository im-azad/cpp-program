#include <bits/stdc++.h>
using namespace std;

class Student
{

    // access modifier
public:
    char name[100];
    int roll;
    int cls;
    char section;
    // constructor function
    Student(int r, int c, char sec, char* n )
    {
        roll = r;
        cls = c;
        section = sec;
        strcpy(name, n);
    }
};

int main()
{
    Student rahim(1, 9, 'A', "Rahim");
    Student karim(5, 4, 'B', "Karim");


    cout << rahim.name << endl;
    cout << rahim.roll << endl;
    cout << rahim.section << endl;
    cout << karim.name << endl;
    cout << karim.roll << endl;
    cout << karim.section << endl;
    
    return 0;
}
