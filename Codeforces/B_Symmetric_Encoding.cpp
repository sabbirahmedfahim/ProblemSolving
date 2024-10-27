#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    map<char, int> mp;
    string s1;
    for (int i = 0; i < n; i++)
    {
        if(mp[s[i]] == 0) 
        {
            s1.push_back(s[i]); mp[s[i]]++;
        }
    }
    sort(s1.begin(), s1.end());
    // cout << s1 << nl;
    map<char, char> mp2;
    for (int i = 0, j = s1.size()-1; i < s1.size()/2+1; i++, j--)
    {
        mp2[s1[i]] = s1[j];
        mp2[s1[j]] = s1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << mp2[s[i]];
    }
    cout << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}