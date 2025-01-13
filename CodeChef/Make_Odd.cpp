#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; string a, b; cin >> n >> a >> b;
    int strictOne = 0, strictZero = 0, zeroOrOne = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == '1' && b[i] == '1') strictOne++;
        else if(a[i] == '0' && b[i] == '0') strictZero++;
        else zeroOrOne++;
    }
    if(zeroOrOne == 0)
    {
        if(strictOne%2 == 0) cout << "NO" << nl;
        else cout << "YES" << nl;
    }
    else
    {
        if(zeroOrOne > 0) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}