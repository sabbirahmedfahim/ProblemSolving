// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s; int zero = 0, one = 0;
    for(auto data : s) data == '0'? zero++ : one++;
    for(auto data : s)
    {
        if(data == '0' && one != 0) one--;
        else if(data == '1' && zero != 0) zero--;
        else break; // break means break, rules break
    }
    cout << abs(zero-one) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}