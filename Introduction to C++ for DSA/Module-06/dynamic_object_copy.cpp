#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *rakib = new Person("Rakib", 25);
    Person *sakib = new Person("Sakib", 45);
    // rakib = sakib;  not allowed
    // rakib->name = sakib->name;
    // rakib->age = sakib->age;
    *rakib = *sakib;
    delete sakib;
    cout << rakib->name;
    return 0;
}