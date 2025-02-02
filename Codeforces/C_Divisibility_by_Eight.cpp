// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;

    auto it = s.find('0'); 
    auto it2 = s.find('8');
    if(it != -1) // edge case
    {
        cout << "YES" << nl;
        cout << 0 << nl; return;
    }
    if(it2 != -1) // edge case
    {
        cout << "YES" << nl;
        cout << 8 << nl; return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i+1; j < s.size(); j++)
        {
            int x = (s[i]-'0') * 10 + (s[j]-'0');
            if(x%8 == 0)
            {
                cout << "YES" << nl;
                cout << s[i] << s[j] << nl; return;
            }
            for (int k = j+1; k < s.size(); k++)
            {
                int y = (s[i]-'0') * 100 + (s[j]-'0') * 10 + (s[k]-'0');
                if(y%8 == 0)
                {
                    cout << "YES" << nl;
                    cout << s[i] << s[j] << s[k] << nl; return;
                }
            }
        }
    }
    
    cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}