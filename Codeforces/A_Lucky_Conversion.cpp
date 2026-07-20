#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string x, y; cin >> x >> y;

    int four = 0, seven = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if(x[i] != y[i])
        {
            four += x[i] == '4';
            seven += x[i] == '7';
        }
    }
    
    int cnt = min(four, seven);

    int now = max(four, seven);
    now -= cnt;

    cnt += now;

    cout << cnt << nl;

    return 0;
}