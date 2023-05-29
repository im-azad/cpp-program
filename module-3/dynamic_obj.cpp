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
    char name[100] = "Kamal";

    // dynamic object 

    Student* kamal = new Student(3, 5, 'B', name);

    cout <<kamal->name<<endl;
    cout <<kamal->section<<endl;
    
    return 0;
}
