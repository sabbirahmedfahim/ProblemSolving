// resolved (editorial) [some confusion remains]
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*[shadow code]
if(all elements same) 
    cout << -1
else
{
    b -> smallest element
	c -> remaining elements
}
*/
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    input(v);
    sort(v.begin(), v.end());
    if(v[0] == v[n-1]) cout << -1 << nl;
    else
    {
        int i = 0;
        while (v[i] == v[0]) i++;
        cout << i << " " << n - i << nl;
        for(int j = 0; j < i; ++j) cout << v[j] << " ";
        for(int j = i; j < n; ++j) cout << v[j] << " ";
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}
