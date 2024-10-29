#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    string s;
    cin >> s;
    bool isInserted = false;
    for (int i = 0; i < s.size() - 1 && !isInserted; i++)
    {
        if (s[i] == s[i + 1])
        {
            isInserted = true;
            char ch = 'a';
            while (1)
            {
                if(ch != s[i]) 
                {
                    s.insert(i+1, 1, ch); break;
                } 
                ch++;
            }
        }
    }
    if(isInserted) cout << s << nl;
    else 
    {
        char ch = 'a';
        while (1)
        {
            if(s.back() != ch)
            {
                s += ch; break;
            }
            ch++;
        }
        cout << s << nl;
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}