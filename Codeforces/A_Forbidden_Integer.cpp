// Up-solved (directly) after reviewing others' approaches (YouTube)
#include <bits/stdc++.h>
#define nl '\n'
#define sp " "
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, k, x; cin >> n >> k >> x;
    if(x != 1) 
    {
        cout << "YES" << nl << n << nl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << sp;
        }
        cout << nl;
    } 
    else // x is surely '1'
    {
        // if(k == 1 || k == 2 && n%2) cout << "NO" << nl;
        if(k == 1) cout << "NO" << nl;
        else 
        {
            // k >= 2
            if(n%2 == 0)
            {
                cout << "YES" << nl;
                cout << n/2 << nl;
                for (int i = 0; i < n/2; i++)
                {
                    cout << 2 << sp;
                }
                cout << nl;
            }
            else if(k >= 3)
            {
                cout << "YES" << nl;
                cout << n/2 << nl;
                for (int i = 0; i < (n/2)-1; i++)
                {
                    cout << 2 << sp;
                }
                // cout << 1 << sp;
                cout << 3 << sp; // formulla : 2(p-1)+3
                cout << nl; 
            }
            else cout << "NO" << nl;
        }
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}