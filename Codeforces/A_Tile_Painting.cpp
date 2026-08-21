#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    int ans = n;

    int odd = 0, even = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            ans = min(ans, n - n / i);
            ans = min(ans, n - n / (n / i));

            int x = n - n / i, y = n - n / (n / i);
            int A = i, B = n / i;
            x *= 2; y *= 2;
            while (n % x == 0 && x < n)
            {
                A /= 2; x *= 2;
            }
            while (n % y == 0 && y < n)
            {
                B /= 2; y *= 2;
            }
            ans = min(ans, min(A, B));

            if(i == (n / i)) 
            {
                odd += i & 1; even += i % 2 == 0;
            }
            else 
            {
                odd += i & 1; even += i % 2 == 0;
                odd += (n / i) & 1; even += (n / i) % 2 == 0;
            }

            if(odd >= 2 || (odd && even))
            {
                cout << 1 << nl; return 0;
            }
        }
    }
    
    cout << ans << nl;

    return 0;
}