#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string name, int age, int marks1, int marks2)
    {
        (*this).name = name;
        this->age = age;
        this->marks1 = marks1;
        this->marks2 = marks2;
    }
    void hello()
    {
        cout << "hello" << endl;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    Person rakib("rakib hasan", 20, 80, 44);
    cout << rakib.name;

    return 0;
}