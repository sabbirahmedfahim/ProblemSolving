#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    int zero = 0, one = 0;

    int last = -1;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i] == '0' && s[i+1] == '1') 
        {
            zero++; last = 0;
        }
        else if(s[i] == '1' && s[i+1] == '0') 
        {
            one++; last = 1;
        }
    }
    if(last != s.back()) (s.back() == '1')? one++ : zero++;

    cout << min(one, zero) << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}