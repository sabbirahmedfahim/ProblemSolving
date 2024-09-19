#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        int sum = 0;
        int l = n%10;
        while (n != 0)
        {
            sum += n;
            n /= 0;
        }
        int ans = 0;
        for (int i = 1; i <= l; i++)
        {
            int loopSum = 0;
            while (loopSum <= sum)
            {
                ans+=i;
                i+=i;
            }
        }
        cout << ans << nl;
    }

    return 0;
}