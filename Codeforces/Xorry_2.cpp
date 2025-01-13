#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
The real edge case is checking the constants: 0 ≤ A ≤ B ≤ X.
*/
void solve()
{
    int x; cin >> x;

    if(__builtin_popcount(x) == 1) // edge case
    {
        cout << 1 << nl; return;
    }

    int a = 0, b = 0; int from; bool secondTime = false;
    for (int k = 31; k >= 0; k--)
    {
        // if((x >> k) & 1 ) cout << 1 << " ";
        // else cout << 0 << " ";
        if(((x & (1 << k))) && secondTime == false) 
        {
            a += (1 << k); 
            // from = k;
            secondTime = true;
            // break;
        }
        else if(((x & (1 << k))) && secondTime)
        {
            from = k; break;
        }
    }
    b = x - a;
    // cout << min(a, b) << " " << max(a, b) << " ";
    a = min(a, b), b = max(a, b);

    int zeroZero = 0;
    for (int k = from; k >= 0; k--)
    {
        if(((a & (1 << k)) == 0) && ((b & (1 << k)) == 0)) zeroZero++;
    }
    // cout << zeroZero << nl;
    cout << (1<<zeroZero) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}