#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string x,y; cin >> x >> y;

    int a = x.size(), b = y.size();

    int cnt = 0;
    for (int i = 1; i <= 100; i++)
    {
        if(b % (a * i) == 0) cnt++;
    }
    cout << max(1, cnt) << nl;

    return 0;
}