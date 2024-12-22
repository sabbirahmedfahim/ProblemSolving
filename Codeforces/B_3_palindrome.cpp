#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, tmp; cin >> n; tmp = n; string ans; bool a_boshbe = true;
    while (tmp--)
    {
        if(a_boshbe)
        {
            if(tmp == 0) ans += 'a';
            else 
            {
                ans += "aa"; tmp--;
            }
        }
        else 
        {
            if(tmp == 0) ans += 'b';
            else 
            {
                ans += "bb"; tmp--;
            }
        }
        a_boshbe = !a_boshbe;
    }
    if(n <= 3) 
    {
        string s = "abb";
        while (n--)
        {
            cout << s.back(); s.pop_back();
        }
        cout << nl;
    }
    else cout << ans << nl;

    return 0;
}
