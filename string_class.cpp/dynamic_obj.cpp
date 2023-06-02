#include <bits/stdc++.h>
using namespace std;
class Person  {
    public :
        string name;
        int age;
    Person (string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    
};
int main()
{
    Person * shakib = new Person("Sakib", 25);
    Person * rakib= new Person("Rakib", 20);

    // rakib = rakib; (dont dot it)

    // rakib->age = shakib->age  copy object ()

    *rakib = * shakib;

    delete shakib;
    cout << rakib->age<< " " << (*rakib).name << endl;
    return 0;
}
