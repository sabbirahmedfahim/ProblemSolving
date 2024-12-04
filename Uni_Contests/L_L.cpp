#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    if(s.size() <= 2) 
    {
        cout << "Bad" << nl; return;
    }
    for (int i = 0; i < s.size()-2; i++)
    {
        if(s.substr(i, 3) == "010" || s.substr(i, 3) == "101")
        {
            cout << "Good" << nl; return;
        }
    }
    cout << "Bad" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}