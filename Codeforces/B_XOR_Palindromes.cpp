// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    int matchNai = 0, matchedPair = 0;
    for (int i = 0, j = n-1; i < n/2; i++, j--)
    {
        if(s[i] == s[j]) matchedPair += 2;
        else matchNai ++;   
    }
    
    // if(n&1) matchedPair++;
    string ans;
    for (int i = 0; i < n+1; i++)
    {
        int sum = i - matchNai;
        if(sum < 0) ans += '0'; 
        else 
        {
            sum = max((sum&1), sum-matchedPair);
            sum = max(0, sum - (n&1)); // think
            if(sum == 0) ans += '1';
            else ans += '0';
        }
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}