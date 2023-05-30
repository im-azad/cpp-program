#include <bits/stdc++.h>
using namespace std;

class Student
{
// access modifier
public:
    char name[100];
    // constructor function
    Student(char *n)
    {
        strcpy(name, n);
    }
};

Student fun()
{
    char name[100] = "Rahim";
    Student Stu_name("Rahim");
    return Stu_name;
}

int main()
{
    Student rahim = fun();
    cout << rahim.name << endl;

    return 0;
}
