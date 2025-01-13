#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
at most 2n operations and in one operation, add 1 to it.

corner case -> arr[i] == 1
*/
void solve2()
{
    int n; cin >> n; vector<ll> v(n); for(auto &c : v) cin >> c;
    int mxOp = 2*n, cntOp = 0;
    
    for(auto &data : v) if(data == 1) data++;
    for (int i = 1; i < n; i++)
    {
        if(v[i]%v[i-1] == 0) v[i]++;
        // {
        //     v[i]++; cntOp++;
        // }
    }   
    // for (int i = 1; i < n; i++)
    // {
    //     cout << v[i] << " % " << v[i-1] << " = " << v[i]%v[i-1] << nl;
    // }
    print(v);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve2();

    return 0;
}