// #include <bits/stdc++.h>
// using namespace std;

// int *fun()
// {
//     // deceleration dynamic array
//     int *arr = new int[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     return arr;
// }

// int main()
// {
//     int *my_array = fun();

//     for (int i = 0; i < 5; i++)
//     {
//         cout << my_array[i] << " ";
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    std::string name;
    int age;

    // Constructor
    Person(const std::string& personName, int personAge) {
        name = personName;
        age = personAge;
        std::cout << "A Person object has been created." << std::endl;
    }
};

int main() {
    // Create an object of the Person class using the constructor
    Person person("John Doe", 25);

    // Access and print the properties of the person object
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << " years" << std::endl;

    return 0;
}

