// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; ll m; cin >> n >> m;
    // Problem with n(odd) and m(even): For n-1 and n indices, odd numbers remain, and making their XOR zero is impossible. At most, one of them can be made zero.
    if((n > m) || (n%2 == 0 && m%2 == 1))
    {
        cout << "No" << nl; return;
    }
    vector<ll> v(n+1);
    cout << "Yes" << nl;
    for (int i = 1; i <= n-2; i++) v[i] = 1; // greedy: 1 theke choto 0, r even no. of 1 er xor zero ei
    if(n%2 == 0 && m%2 == 0) // 1 to n-2 even num. of 1 ache, and we know even num of 1 er xor == 0
    { 
        ll data = m-(n-2); 

        v[n-1] = data/2; // surely the value of v[n-1] will be an even number, and we know...
        v[n] = data/2;
    }
    else if(n%2) // n-1: 1, n: rest of the values
    {   
        v[n-1] = 1; // From 1 to n-1, there are an even number of 1s, and XOR of an even number of 1s is always zero. :)
        v[n] = m-(n-1);
    }
    for (int i = 1; i <= n; i++) cout << v[i] << " ";
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}