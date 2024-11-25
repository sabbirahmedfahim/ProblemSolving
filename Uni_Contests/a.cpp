#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    ll n, k; cin >> n >> k;
    if(n%2 == 0)
    {
        ll oddSide = n/2;
        if(k <= oddSide)
        {
            cout << (k*2)-1 << nl;
        }
    }

    return 0;
}