#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s; int n = s.size();

    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(i != n - 1 && s[i] == '\\' && s[i + 1] == '\\') 
        {
            cnt++; 
            i++;
        }
        else if(i != n - 1 && s[i] == '\\' && s[i + 1] == '0') 
        {
            break;
        }
        else if(s[i] == '\\')
        {
            cout << "INVALID" << nl; return;
        }
        else  //if(s[i] == '0')
        {
            cnt++;
        }
    }
    
    cout << cnt << nl;
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