#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; string a, b; cin >> n >> a >> b;
    int tmp = n;

    // swap operation
    while (tmp--)
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if(j == i) continue;
                    if(a[i] != a[j]) 
                    {
                        swap(a[i], a[j]);
                    }
                }
            }
        }
    }

    // flip operation
    tmp = n;
    while (tmp--)
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if(j == i) continue;
                    if(a[j] != b[j]) 
                    {
                        if(a[i] == a[j])
                        {
                            if(a[i] == '0')
                            {
                                a[i] = '1'; a[j] = '1';
                            }
                            else
                            {
                                a[i] = '0'; a[j] = '0';
                            }
                        }
                        else 
                        {
                            if(a[i] == '0')
                            {
                                a[i] = '1'; a[j] = '0';
                            }
                            else
                            {
                                a[i] = '0'; a[j] = '1';
                            }
                        }
                    }
                }
            }
        }
    }
    

    // cout << a << " " << b << nl;
    if(a == b) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}