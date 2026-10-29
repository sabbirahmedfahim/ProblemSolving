#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

bool isPal(string s){
    int len = s.size();
    for (int i = 0; i < len / 2; i++){
        if (s[i] != s[len - i - 1]){
            return false;
        }
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        string c = s.substr(0, i + 1);
        reverse(c.begin(), c.end());
        string temp = s + c;

        // cout << "Check " << c << endl;

        if (isPal(temp)){
            // reverse(c.begin(), c.end());
            cout << s << ' ' << c << endl;
            break;
        }
        reverse(c.begin(), c.end());
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}