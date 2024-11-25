#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long int a;
        cin >> a;
        long long int n = a - 2;
        long long int arr[n];
        long long int present_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            present_sum += arr[i];
        }
        long long int sum;
        cin >> sum;
        long long int dif = sum - present_sum;
        cout << dif + 1 << endl;
    }

    return 0;
}