#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;

    int cnt = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            cnt += 2;
        }
    }

    cout << n - cnt << nl;
    

    return 0;
}