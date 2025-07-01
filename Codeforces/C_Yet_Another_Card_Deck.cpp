#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; cin >> n >> q;
    // there are at max 50 colors

    vector<int> a(n + 1);
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(!mp.count(a[i])) mp[a[i]] = i;
    }
    
    while (q--)
    {
        int data; cin >> data;
        int pos = mp[data];
        cout << pos << " ";
        
        for(auto &[key, val] : mp)
        {
            if(val < pos) val++;
        }
        
        mp[data] = 1;
    }
    cout << nl;

    return 0;
}