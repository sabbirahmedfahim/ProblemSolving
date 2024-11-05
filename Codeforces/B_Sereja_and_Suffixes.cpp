#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int n, m; cin >> n >> m;
    vector<int> v(n), ans(n);
    set<int> s;
    for(auto &data : v) cin >> data;

    for (int i = n-1; i >= 0; i--)
    {
        if(!s.count(v[i])) s.insert(v[i]);
        ans[i] = s.size();
    }
    
    while (m--)
    {
        int pos; cin >> pos;
        pos --;
        cout << ans[pos] << nl;
    }
    

    return 0;
}