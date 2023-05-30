#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    // increases array size
    int b[8];

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    b[5] = 10;
    b[6] = 30;
    b[7] = 50;
 

    for (int i = 0; i < 8; i++)
    {
        cout << b[i] << " ";
    }
    // delete a array
    delete[] a;
    // save memory
    return 0;
}
