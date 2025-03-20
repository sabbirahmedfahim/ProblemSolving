#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    if(n == 1)
    {
        cout << -1 << nl; return 0;
    }
    for (int i = 2; i <= n; i+=2)
    {
        cout << i << nl;
    }
    cout << nl;
    

    return 0;
}