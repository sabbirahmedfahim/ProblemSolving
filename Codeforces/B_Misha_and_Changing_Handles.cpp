#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FAJR_BOOST()

    int n; cin >> n; 
    map<string, string> ans, has;

    while (n--)
    {
        string a, b; cin >> a >> b;
        if(has.find(a) != has.end())
        {
            string s = has[a];
            ans[s] = b;
            has.erase(a);
            has[b] = s;
        }
        else 
        {
            ans[a] = b;
            has[b] = a;
        }
    }
    cout << ans.size() << nl;
    for(auto [x, y] : ans)
    {
        cout << x << " " << y << nl;
    }
    

    return 0;
}