#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    Student a[2];
    for (int i = 0; i < 2; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }
    Student max;
    max.marks = INT_MIN;

    // Student min;
    // min.marks = INT_MAX;

    for (int i = 0; i < 2; i++)
    {
        if (a[i].marks > max.marks)
        {
            max = a[i];
        }
    }
    cout << max.name << " " << max.roll << " " << max.marks << endl;

    return 0;
}
