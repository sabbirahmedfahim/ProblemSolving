#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;
    bool vis[s.size()] = {0};

    bool AB_pr = false;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B' && !AB_pr) 
        {
            vis[i] = 1, vis[i+1] = 1; AB_pr = true;
        }
        if(s[i] == 'B' && s[i+1] == 'A' && AB_pr && !vis[i] && !vis[i+1])
        {
            cout << "YES" << nl; return 0;
        }
    }

    memset(vis, false, sizeof(vis));

    bool BA_pr = false;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == 'B' && s[i+1] == 'A' && !BA_pr) 
        {
            vis[i] = 1, vis[i+1] = 1; BA_pr = true;
        }
        if(s[i] == 'A' && s[i+1] == 'B' && BA_pr && !vis[i] && !vis[i+1])
        {
            cout << "YES" << nl; return 0;
        }
    }

    cout << "NO" << nl;
    

    return 0;
}