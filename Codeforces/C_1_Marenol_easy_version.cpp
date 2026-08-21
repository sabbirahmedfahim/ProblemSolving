#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    string x, y; cin >> x >> y;

    if(n <= 2)
    {
        if(x == y) cout << "YES" << nl;
        else cout << "NO" << nl;

        return;
    }
    

    for (int k = 0; k < 100; k++)
    {
        for (int i = 0; i < n - 2; i++)
        {
            string a = "", b = "";
            a.push_back(x[i]); a.push_back(x[i + 1]); a.push_back(x[i + 2]);
            b.push_back(y[i]); b.push_back(y[i + 1]); b.push_back(y[i + 2]);
    
            if(a != b)
            {
                if(a[0] == '0' && a[1] == '0' && a[2] == '1')
                {
                    if(b[0] == '1' && b[1] == '0' && b[2] == '0') 
                    {
                        x[i] = y[i]; 
                        x[i + 1] = y[i + 1];
                        x[i + 2] = y[i + 2];
                    }
                    // else 
                    // {
                    //     cout << "NO" << nl; return;
                    // }
                }
                else if(a[0] == '1' && a[1] == '0' && a[2] == '0')
                {
                    if(b[0] == '0' && b[1] == '0' && b[2] == '1') 
                    {
                        x[i] = y[i]; 
                        x[i + 1] = y[i + 1];
                        x[i + 2] = y[i + 2];
                    }
                    // else 
                    // {
                    //     cout << "NO" << nl; return;
                    // }
                }
                else if(a[0] == '1' && a[1] == '1' && a[2] == '0')
                {
                    if(b[0] == '0' && b[1] == '1' && b[2] == '1') 
                    {
                        x[i] = y[i]; 
                        x[i + 1] = y[i + 1];
                        x[i + 2] = y[i + 2];
                    }
                    // else 
                    // {
                    //     cout << "NO" << nl; return;
                    // }
                }
                else if(a[0] == '0' && a[1] == '1' && a[2] == '1')
                {
                    if(b[0] == '1' && b[1] == '1' && b[2] == '0') 
                    {
                        x[i] = y[i]; 
                        x[i + 1] = y[i + 1];
                        x[i + 2] = y[i + 2];
                    }
                    // else 
                    // {
                    //     cout << "NO" << nl; return;
                    // }
                }
                // else 
                // {
                //     cout << "NO" << nl; return;
                // }
            }
        }
    }
    
    
    if(x == y) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}