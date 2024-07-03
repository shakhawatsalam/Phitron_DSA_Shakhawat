#include <stdio.h>

int main()
{
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    long long int min;

    if (n < m && n < k)
    {
        min = n;
    }
    else if (m < n && m < k)
    {
        min = m;
    }
    else
    {
        min = k;
    }
    if (n - min != 0 && k - min != 0)
    {
        // for 2nd condition
        if (n > k)
        {
            long long int existingeye = n - min;
            long long int existingbody = k - min;

            long long int ans = existingeye / 2;

            if (existingbody < ans)
            {
                printf("%lld", k);
            }
            else
            {
                printf("%lld", ans + min);
            }
        }
        else
        {
            if (n < k)
            {
                long long int existingeye = n - min;
                long long int ans = existingeye / 2;
                printf("%lld\n", ans + min);
            }
            else
            {

                long long int exist = k - min;
                long long int ans = exist / 2;
                printf("%lld", ans + min);
            }
        }
    }
    else
    {
        printf("%lld", min);
    }

    return 0;
}