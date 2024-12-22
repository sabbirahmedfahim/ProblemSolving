#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Observation: If the string is "()" and its size is n, we cannot create a string of 
length 2n that satisfies both conditions:
1. It contains no contiguous substring "()" 
2. It is valid (according to the problem statement).
*/
void solve()
{
    string s; cin >> s;
    if(s == "()") cout << "NO" << nl;
    else 
    {
        cout << "YES" << nl;
        string x, y; 
        for (int i = 0; i < s.size(); i++)
        {
            x += '('; x += ')';
            y += '(';
        }
        for (int i = 0; i < s.size(); i++) y += ')';
        auto it = x.find(s);
        if(it == -1) cout << x << nl;
        else cout << y << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}