#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n); for(auto &data : v) cin >> data;
    vector<int> sp1, sp2; sp1.push_back(v[0]); bool sp1_on = true;
    for (int i = 1; i < n; i++)
    {
        if(sp1_on && v[i] >= v[i-1]) sp1.push_back(v[i]);
        else sp1_on = false;
        if(!sp1_on) sp2.push_back(v[i]);
    }
    if(sp2.empty())
    {
        if(is_sorted(all(sp1))) cout << "Yes" << nl;
        else cout << "No" << nl;
        return;
    }

    if(is_sorted(all(sp1)) && is_sorted(all(sp2)) && sp2.back() <= sp1.front()) cout << "Yes" << nl;
    else cout << "No" << nl;
    // print(sp1); print(sp2);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}