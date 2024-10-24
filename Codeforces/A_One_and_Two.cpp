#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    int two = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] == 2) two++;
    }
    int two_searching = 0;
    int k = 0;
    if(two != 0 && two%2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if(two_searching == two/2) break;
            if(v[i] == 2) two_searching++;
            k++; // shortest index
        }
    }
    if(two%2) cout << -1 << nl;
    else if(two == 0) cout << 1 << nl;
    else cout << k << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}