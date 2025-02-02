// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s; int n = s.size();
    int cnt_ = count(all(s), '_');

    int ans = 0;

    for (int i = 0, j = n-1; i < n && i < j; )
    {
        if(cnt_ == 0) break;
        while (s[i] != '^' && i < n-2 && i < j-1) 
        {
            i++; 
        }
        while (s[j] != '^' && j > 1 && j > i+1) 
        {
            j--; 
        }
        if(s[i] == '^' && s[j] == '^' && cnt_ > 0) ans++;

        i++, j--; cnt_--;
    }

    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    for (int tt = 1; tt <= t; tt++)
    {
        cout << "Case " << tt << ": ";
        solve();
    }
    
    return 0;
}