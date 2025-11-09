#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            char ch;
            if(s[i] == 'a') ch = 'b';
            else ch = 'a';

            if(i + 2 < s.size() && s[i + 2] == ch) 
            {
                for (char c = 'a'; c <= 'z'; c++)
                {
                    if(c != s[i] && c != s[i + 2])
                    {
                        ch = c; break;
                    }
                }
            }

            s[i + 1] = ch;
        }
    }
    
    cout << s << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}