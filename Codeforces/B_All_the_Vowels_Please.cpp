#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    int x = -1, y = -1;
    for (int i = 5; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if(n / i >= 5)
            {
                x = i, y = n / i;

                break;
            }
        }
    }
    
    if(x == -1)
    {
        cout << -1 << nl; return 0;
    }

    string s = "aeiou";

    for (int i = 0; i < x; i++)
    {
        int currIdx = i % 5;
        for (int j = 0; j < y; j++)
        {
            cout << s[currIdx];
            currIdx++;

            if(currIdx == 5) currIdx = 0;
        }
        // cout << nl;
    }

    cout << nl;

    return 0;
}