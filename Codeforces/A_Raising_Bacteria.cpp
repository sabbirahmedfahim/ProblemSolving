#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n; cin >> n;
    ll cur = 0, cnt = 0;
    while (n > 0) // using bitmasks
    {
        if((1<<cur) > n)
        {
            cnt++; 
            n -= 1 <<(cur-1); // Decreases `n` by 2^(cur-1)
            // n -= 1 >> cur;
            cur = 0;
        }
        cur++;
    }

    // cur = 1;
    // while (n > 0) // AC code
    // {
    //     if(cur*2 > n)
    //     {
    //         cnt++; n-= cur; cur = 1; 
    //     }
    //     cur *= 2;
    // }
    
    cout << cnt << nl;

    return 0;
}