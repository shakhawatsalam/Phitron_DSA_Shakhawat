#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age = 205;
    void Hello()
    {
        cout << "hellor rakib";
    }

}
namespace Sakib
{
    int age2 = 202;
    void Hello2()
    {
        cout << "hellor sakib";
    }

}
using namespace Rakib;
using namespace Sakib;
int main()
{
    cout << age << endl;
    cout << age2 << endl;
    return 0;
}