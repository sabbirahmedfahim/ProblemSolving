#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    deque<char> ans;
    for (int i = s.size()-1; i >= 0; i--)
    {
        if(s[i] != '0') ans.push_front(s[i]+48);
        else
        {
            i--;
            // while (s[i] == '0') i--; // wrong undersanding
            char ch = s[i]; i--;
            char ch2 = s[i];
            int n = (ch2 - '0') * 10;
            n += (ch - '0');
            ans.push_front((char) (n+96));
        }
    }
    
    if(!ans.empty()) for(auto data : ans) cout << data;
    cout << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}


