#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()
{
    // one way
    // Student rahim(320, 5, 4.99);

    // return rahim;
    // returnting pointer of object
    Student *rahim = new Student(320, 5, 4.33);
    return rahim;
}

int main()
{
    Student *ans = fun();

    cout << ans->cls << " " << ans->gpa << " " << ans->roll << endl;
    delete ans;
    cout << ans->cls << " " << ans->gpa << " " << ans->roll;
    return 0;
}