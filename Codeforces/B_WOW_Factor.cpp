#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
the "v"s have to be consecutive. ***
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;
    int left = 0, right = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if(s[i - 1] == 'v' && s[i] == 'v') right++;
    }
    // cout << right << nl;

    ll sum = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i - 1] == 'v' && s[i] == 'v') left++, right--;

        if(s[i] == 'o' && left >= 1 && right >= 1)
        {
            sum += 1ll * left * right;
        }
    }
    cout << sum << nl;

    return 0;
}