#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
lll
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<int> v(n); for(auto &data : v) cin >> data;
    ll sum = 0;
    for(auto data : v) sum += 1ll* data;
    cout << sum << nl;

    return 0;
}