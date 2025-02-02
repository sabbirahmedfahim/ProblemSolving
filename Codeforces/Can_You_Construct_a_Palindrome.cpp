#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;

    // if(s.size() == 2 && k >= 1) // edge case
    // {
    //     cout << "YES" << nl; return 0;
    // }


    if(s.size() & 1) k++; // not sure

    map<char, int> mp;
    for(auto e : s) mp[e]++;

    for(auto &[key, val] : mp) 
    {
        if(k == 0) break;

        // cout << key << " " << val << nl;
        if(val & 1) 
        {
            val--; k--;
        }
        // if(val == 0) mp.erase(mp[key]);
    }

    if(mp.size() == 1) // edge case
    {
        cout << "YES" << nl; return;
    }


    int cnt = 0;
    for(auto [key, val] : mp)
    {
        if(val == 0) cnt++;
    }

    int mpSz = mp.size() - cnt;
    if(mpSz <= 1) // edge case
    {
        cout << "YES" << nl; return;
    }

    for(auto [key, val] : mp) 
    {
        if(val & 1)
        {
            cout << "NO" << nl; return;
        }
        // cout << key << " " << val << nl;
    }

    cout << "YES" << nl;

}
void solve2()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;

    if(s.size() & 1) k++; // not sure

    map<char, int> mp;
    for(auto e : s) mp[e]++;

    int odd = 0;
    for(auto [key, val] : mp)
    {
        if(val & 1) odd++;
    }

    if(s.size() & 1) odd--;

    while (k--)
    {
        odd--;
    }
    
    if(odd > 1) cout << "NO" << nl; 
    else cout << "YES" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // solve();
    solve2();

    return 0;
}