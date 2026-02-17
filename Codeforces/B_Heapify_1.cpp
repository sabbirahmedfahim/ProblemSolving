#include <bits/stdc++.h>
#define nl endl
using namespace std;


void solve() 
{
    int n; cin >> n;
    vector<bool> isPrime(n + 1, true);
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    

    // isPrime.set(); // sets all bits to true
    // isPrime[0] = isPrime[1] = false;

    for (int i = 1; i <= n; i++) 
    {
        if (isPrime[i]) 
        {
            // cerr << i << nl;
            if(a[i] % i != 0)
            {
                // cerr << a[i] << " " << i << nl;
                cout << "NO" << nl; return;
            }
            for (int j = i * 2; j <= n; j *= 2) 
            {
                isPrime[j] = false;
                if(a[j] % i != 0)
                {
                    // cerr << a[j] << " --> " << i << nl;
                    cout << "NO" << nl; return;
                }
            }
        }
    }

    cout << "YES" << nl;
}
int main() 
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
}