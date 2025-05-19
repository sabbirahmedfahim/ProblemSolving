#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; string s; cin >> n >> s;

    string tmp = s; sort(all(tmp));
    if(s == tmp)
    {
        cout << "NO" << nl; return 0;
    }

    map<char, int> cntOcc, curOcc;
    for(auto e : s) cntOcc[e]++;

    int l = -1, r = -1;
    char ch;
    for (int i = 0; i < n; i++)
    {
        curOcc[s[i]]++;
        for (char c = 'a'; c < s[i] ; c++)
        {
            if(cntOcc.count(c) && curOcc[c] < cntOcc[c])
            {
                ch = c; l = i + 1;
                i = n;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(s[i] == ch) r = i + 1;
    }
    
    cout << "YES" << nl;
    cout << l << " " << r << nl;

    return 0;
}