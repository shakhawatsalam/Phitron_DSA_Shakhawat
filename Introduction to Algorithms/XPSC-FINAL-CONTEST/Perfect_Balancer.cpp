#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += A[i];
    }

    int left_sum = 0;

    for (int i = 0; i < n; i++)
    {

        int right_sum = total_sum - left_sum - A[i];

        if (left_sum == right_sum)
        {
            cout << 2 * left_sum << " " << i + 1 << endl;
            return 0;
        }

        left_sum += A[i];
    }

    cout << "UNSTABLE" << endl;

    return 0;
}
