#include <bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age = 24;
    void hello()
    {
        cout<< " thie is Rakib namespace"<< endl;
    }
}
namespace Sakib
{
    int age2 = 36;
    void hello2()
    {
        cout<< " thie is Sakib namespace"<< endl;
    }
}

using namespace Sakib;
int main()
{
    cout << Rakib::age << endl;
    // cout << Sakib::age2<< endl;
    hello2();
      cout << age2 << endl;


    
    return 0;
}
