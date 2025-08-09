// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 3E5 + 6;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);

    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;
    
    vector<int> fixed(N, 0), freqA(N, 0), freqB(N, 0);
    for (int i = 0; i < n; i++)
    {
        freqA[a[i]]++, freqB[b[i]]++;
        if(a[i] == b[i]) fixed[a[i]] = 1;
    }

    bool off = false;
    for (int i = 0; i < N-1; i++)
    {
        if(freqA[i] == 0 && freqB[i] == 0) 
        {
            cout << i << nl; return;
        }

        
        if(freqA[i] == 0 && freqB[i])
        {
            cout << i + 1 << nl; return;
        }
        if(freqA[i] && freqB[i] == 0)
        {
            cout << i + 1 << nl; return;
        }
    }

    // cout << "Hey" << nl;
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