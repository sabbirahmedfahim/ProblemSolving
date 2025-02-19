// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll l, r; cin >> l >> r;

    if(l == r)
    {
        cout << 0 << nl; return 0;
    }

    for (ll bit = 60; bit >= 0; bit--)
    {
        if(((l>>bit) & 1) != ((r>>bit) & 1))
        {
            cout << (1ll<<(bit+1))-1 << nl; // shob alada kore on na kore direct 2 power x print kora...
            break;
        }
    }


    return 0;
}