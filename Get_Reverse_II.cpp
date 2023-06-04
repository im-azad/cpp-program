#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }
    int k = 0, j = n - 1;
    while (k < j)
    {

        int tem = arr[k].id;
        arr[k].id = arr[j].id;
        arr[j].id = tem;
        k++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
    }

    return 0;
}
