#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n; cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if(n & 1) 
        {
            n *= 3; n++;
            cout << n << " ";
        }
        else
        {
            n >>= 1;
            cout << n << " ";
        }
    }
    cout << nl;

    return 0;
}