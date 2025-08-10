#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
RGB
RBG
GRB
GBR
BGR
BRG
*/
int check(string s, char x, char y, char z)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i+=3) if(s[i] != x) cnt++;
    for (int i = 1; i < s.size(); i+=3) if(s[i] != y) cnt++;
    for (int i = 2; i < s.size(); i+=3) if(s[i] != z) cnt++;
    
    return cnt;
}
void solve()
{
    int n; string s; cin >> n >> s;

    vector<int> a;
    a.push_back(check(s, 'R', 'G', 'B'));
    a.push_back(check(s, 'R', 'B', 'G'));
    a.push_back(check(s, 'G', 'B', 'R'));
    a.push_back(check(s, 'G', 'R', 'B'));
    a.push_back(check(s, 'B', 'G', 'R'));
    a.push_back(check(s, 'B', 'R', 'G'));

    sort(all(a));

    cout << a[0] << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}