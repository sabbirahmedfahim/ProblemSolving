#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    map<char, int> mp1, mp2;
    string timur = "Timur";
    for (int i = 0; i < 5; i++)
    {
        mp1[timur[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        mp2[s[i]]++;
    }
    if(mp1 == mp2) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}