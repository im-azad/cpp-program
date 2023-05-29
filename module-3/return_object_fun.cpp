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

Student fun()
{
    char name[100]= "Rahim";
    Student r(1, 9, 'A', "Rahim");
    return r;
}

int main()
{
    Student rahim = fun();

    cout << rahim.name << endl;
    cout << rahim.roll << endl;
    cout << rahim.section << endl;
    cout << rahim.cls << endl;
 
    
    return 0;
}
