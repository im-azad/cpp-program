#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string nam, int ag,int m1, int m2)
        {
            name = nam;
            age = ag;
            marks1= m1;
            marks2= m2;
        }
        void hello()
        {
            cout << name << " " << age << endl;
        }
        int total_marks()
        {
            return marks1 + marks2;
        }
};
int main()
{
    Person hassan("Hassan khan", 24,110, 90);
    hassan.hello();

    cout << hassan.total_marks()<< endl;

    // cout << hassan.name<< endl;
    return 0;
}
