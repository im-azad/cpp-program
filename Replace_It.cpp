#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;
        string x;
        cin >> x;
        while (str.find(x) != -1)
        {
            str.replace(str.find(x), x.size(), "$");
        }

        cout << str << endl;
    }

    return 0;
}