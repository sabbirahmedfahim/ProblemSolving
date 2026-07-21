#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    int toAdd = 0, sum = 0;
    set<int> posOfOnes;
    for (int i = 0; i < n; i++)
    {
        posOfOnes.insert(i);
    }
    for (int i = n - 1; i > 0; i--)
    {
        if(s[i] == s[i - 1] && *posOfOnes.begin() < i - 1)
        {
            sum += *posOfOnes.begin() + 1;
            s[*posOfOnes.begin()] = '2';
            s[i] = '2';
            posOfOnes.erase(posOfOnes.begin());
        }
        else break;
    }
    

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '2') continue;

        if(s[i] == '0') toAdd += i + 1;
        else if(toAdd && s[i] == '1')
        {
            sum += toAdd;
            toAdd = 0;
            s[i] = '0';
        }
    }
    // cerr << sum << " : " << s << nl;
    

    vector<int> addMore;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1') addMore.push_back(i + 1);
    }
    for (int i = 0; i < addMore.size() / 2 + (addMore.size() & 1); i++)
    {
        sum += addMore[i];
    }

    cout << sum << nl;
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