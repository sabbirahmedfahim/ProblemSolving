// resolved from the editorial (Tricky but makes sense.)
#include <bits/stdc++.h>
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int ask(int x, int y)
{
    cout << "? " << x << " " << y << nl;
    int data; cin >> data;

    return data;
}
void solve()
{
    int n; cin >> n; n *= 2;

    for (int i = 3; i <= n; i += 2)
    {
        if(ask(i, i + 1) == 1)
        {
            cout << "! " << i << nl; return;
        }
    }
    
    if(ask(1, 3) == 1) cout << "! " << 1 << nl;
    else if(ask(1, 4) == 1) cout << "! " << 1 << nl;
    else cout << "! " << 2 << nl;
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}
/*
0 1 2 0
0 1 2 0 3 0...

0 1 0 2
1 0 2 0

1 0 0 2
1 0 0 2 0 3...

0 1 0 0 2 3
2 3 0 0 1 0

3 0 2 1 0 0

*/