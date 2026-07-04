#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int m, s; cin >> m >> s;

    if(s == 0)
    {
        if(m == 1) cout << 0 << ' ' << 0 << nl;
        else cout << -1 << ' ' << -1 << nl; 
        return 0;
    }

    string mx, mn;
    
    int curr = s;
    for (int i = 0; i < m; i++)
    {
        if(curr >= 9)
        {
            mx.push_back('9'); curr -= 9;
        }
        else 
        {
            mx.push_back(curr + '0');
            curr -= curr;
        }
    }

    // cout << mx;
    curr = s - 1;
    for (int i = 0; i < m - 1; i++)
    {
        if(curr >= 9)
        {
            mn.push_back('9'); curr -= 9;
        }
        else 
        {
            mn.push_back(curr + '0');
            curr -= curr;
        }
    }

    mn.push_back('1');
    reverse(all(mn));

    if(curr) 
    {
        curr++;
        mn.front() = min(curr, 9) + '0';
        curr -= min(9, curr);
    } 

    if(curr)
    {
        cout << -1 << ' ' << -1 << nl;
        return 0;
    }

    cout << mn << ' ' << mx << nl;

    return 0;
}