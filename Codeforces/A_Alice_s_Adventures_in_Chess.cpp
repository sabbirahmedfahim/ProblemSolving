#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n, a, b; string s; 
    cin >> n >> a >> b >> s;

    int x = 0, y = 0;
    for (int k = 0; k < 14; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if(x == a && y == b) 
            {
                cout << "YES" << nl; return;
            }
            if(s[i] == 'N') y++;
            else if(s[i] == 'E') x++;
            else if(s[i] == 'S') y--;
            else if(s[i] == 'W') x--;
        }
    }
    
    cout << "NO" << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}