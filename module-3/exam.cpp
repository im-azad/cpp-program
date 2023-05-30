#include <bits/stdc++.h>
using namespace std;
class Person
{

    // access modifier
public:
    char name[100];
    float height;
    int age;

    // constructor function
    Person(char *n, float h, int a)
    {

        strcpy(name, n);
        height = h;
        age = a;
    }
};

int main()
{
    char name1[100] = "Shakib";
    char name2[100] = "Mashrafe";

    // dynamic object

    Person *Shakib = new Person(name1, 5.11, 36);
    Person *Mashrafe = new Person(name2, 5.12, 39);

    // check whose age is greater using ternary operator
    Mashrafe->age > Shakib->age ? cout << Mashrafe->name << endl : cout << Shakib->name << endl;

      // delete  object
    delete Shakib;
    delete Mashrafe;
    return 0;
}
