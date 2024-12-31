#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<int> v(n); for(auto &data : v) cin >> data;
    
    map<int, int> mp; mp[v.front()] = 1; int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if(!mp.count(v[i]-1)) cnt++;
        mp[v[i]]++;
    }
    
    cout << cnt << nl;

    return 0;
}