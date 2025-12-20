// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
edge case-1: 
1
30 4
edge case-2:
1
7 2
*/
void solve()
{
    int n, k;
    cin >> n >> k;

    if (k & 1) 
    {
        for (int i = 0; i < k; i++) cout << n << " ";
        cout << nl;
        return;
    }

    vector<int> result(k, n); // initally all n
    int flipsCnt = 0;

    // print(result);

    for (int bit = __lg(n); bit >= 0; bit--) 
    {
        if ((n >> bit) & 1) 
        {
            if (flipsCnt >= k) // got it
            {
                // cerr << "i am here" << nl;
                result.back() -= (1 << bit);
            }
            else 
            {
                int data = result[flipsCnt];
                data -= (1 << bit);

                if(flipsCnt & 1) // odd flips -> we know there are even numbers of k's
                {
                    for (int currBit = bit - 1; currBit >= 0; currBit--) 
                    {
                        if (!(data >> currBit & 1)) data += (1 << currBit);
                    }
                }
                else // we'll search msb before bit'th bit, then turn on rest of the bits (until currBit >= 0)
                {
                    bool onBitFound = false;
                    for (int currBit = bit - 1; currBit >= 0; currBit--) 
                    {
                        if ((result[flipsCnt] >> currBit & 1)) onBitFound = true;
                        if (onBitFound && !(data >> currBit & 1)) data += (1 << currBit);
                    }
                }
    
                result[flipsCnt] = data;
                flipsCnt++;
            }
            // print(result);
        }
    }

    // cout << nl  << nl;
    print(result);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}