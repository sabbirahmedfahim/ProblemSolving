#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    if(a < c) cout << "No" << nl;
    else if(a > c) cout << "Yes" << nl;
    else 
    {
        if(b > d) cout << "Yes" << nl;
        else cout << "No" << nl;
    }

    return 0;
}