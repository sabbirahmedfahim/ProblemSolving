#include <stdio.h>

int main()
{
    long long t;
    scanf("%lld", &t);
    while (t--)
    {
        long long n, w;
        scanf("%lld %lld", &n, &w);
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        long long count = 1, sum = 0;
        for (long long i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum > w)
            {
                sum = arr[i];
                count++;
            }
        }
        printf("%lld\n", count);
    }

    return 0;
}