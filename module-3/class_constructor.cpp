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
};

int main()
{
    Student rahim;
    rahim.roll = 5;
    rahim.cls = 10;
    rahim.section = 'A';
    char nam[100] = "Rahim";
    strcpy(rahim.name, nam);

    Student karim;
    karim.roll = 1;
    karim.cls = 10;
    karim.section = 'B';
    char nam2[100] = "Karim";
    strcpy(rahim.name, nam2);

    cout << rahim.name ;
    cout << karim.name << " ";
    return 0;
}
