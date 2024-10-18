#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    map<int, int> mp;
    // int cnt = 0; // unnessesary
    // int mx = 0; // unnessesary
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        // if(mp[v[i]] == 1) cnt++; // do not need to count, map STL has a function for counting
        // mx = max(mp[v[i]], mx); // do not need
    }
    // number theory
    // if(cnt >= 3) cout << "No" << nl; // replace with mp.size()
    if(mp.size() >= 3) cout << "No" << nl;
    else if(mp.size() == 1) cout << "Yes" << nl;
    // else if(cnt == 1 || cnt - mx == 1 || cnt - mx == 0) cout << "Yes" << nl; // wrong approach
    // else cout << "No" << nl; // wrong approach    
    else 
    {
        vector<int> v1;
        for(auto data : mp) v1.push_back(data.second);
        if(abs(v1[0]-v1[1]) <= 1) cout << "Yes" << nl;
        else cout << "No" << nl;
    }
}
int main()
{
    FAJR_BOOST()

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}