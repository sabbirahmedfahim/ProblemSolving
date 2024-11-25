#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n); for(auto &data : v) cin >> data;

    map<char, int> mp; char ch = 'a';
    for (int i = 0; i < n; i++)
    {
        if(v[i] == 0)
        {
            mp[ch]++; cout << ch; ch++;
        }
        else 
        {
            for(auto [key, val] : mp)
            {
                if(val == v[i])
                {
                    mp[key]++; cout << key;
                    break;
                }
            }
        }
    }
    // for(auto [key, val] : mp) cout << key << " ";
    cout << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}