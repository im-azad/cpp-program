#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int flag = 0;
    getline(cin, str);
    stringstream ss;
    ss << str;
    string word;
    while (ss >> word)
    {
        if (word == "Ratul")
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
