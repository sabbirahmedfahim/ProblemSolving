#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    string s; cin >> s;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '.')
        {
            int l = i, r = i;
            while (i < n && s[i] == '.')
            {
                i++;
                if(s[i] == '.') r++;
            }
            cnt += (r - l);
        }
    }
    // cout << cnt << nl;

    while (m--)
    {
        int pos; char c; cin >> pos >> c;
        pos--; // 0-based

        if(c == '.' && s[pos] != '.')
        {
            if(pos - 1 < n && s[pos - 1] == '.') cnt++;
            if(pos + 1 < n && s[pos + 1] == '.') cnt++;
        }
        else if(c != '.' && s[pos] == '.')
        {
            if(pos - 1 < n && s[pos - 1] == '.') cnt--;
            if(pos + 1 < n && s[pos + 1] == '.') cnt--;
        }
        cout << cnt << nl;

        s[pos] = c;
    }
    
    return 0;
}