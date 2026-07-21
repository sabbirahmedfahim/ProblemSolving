// used test cases 
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, x, y; cin >> a >> x >> y;

    if(y == 0 || a == y)
    {
        cout << -1 << nl; return 0;
    }
    if(y < a)
    {
        if(abs(x) * 2 < a)
        {
            cout << 1 << nl;
        }
        else cout << -1 << nl;

        return 0;
    }
    
    int currNum = 1, prev1 = -1, prev2 = -1, currY = a;
    for (int i = 0;; i++)
    {
        if(i % 2 == 0)
        {
            currNum++;
            prev1 = currNum;
            prev2 = -1;
        }
        else 
        {
            currNum++; prev1 = currNum;
            currNum++; prev2 = currNum;
        }
        // cerr << prev1 << " : " << prev2 << nl;
        
        currY += a;
        if(currY >= y)
        {
            // cerr << y << " : " << currY << nl;
            // cerr << prev1 << " <---> " << prev2 << nl;
            if(currY == y)
            {
                cout << -1 << nl; return 0;
            }

            if(prev2 == -1)
            {
                if(abs(x) * 2 < a)
                {
                    cout << prev1 << nl;
                }
                else cout << -1 << nl;
            }
            else 
            {
                if(x == 0 || abs(x) >= a) cout << -1 << nl;
                else if(x < 0) cout << prev1 << nl;
                else cout << prev2 << nl;
            }
            return 0;
        }
    }

    return 0;
}