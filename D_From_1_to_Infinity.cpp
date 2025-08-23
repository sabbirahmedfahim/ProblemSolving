#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int sum = 0;
    int from, to; cin >> from >> to;
    for (int i = from; i <= to; i++)
    {
        int x = i;
        while (x)
        {
            sum += x % 10;
            x /= 10;
        }
    }
    cout << sum << nl;

    return 0;
}