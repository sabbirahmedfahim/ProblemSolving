#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; string x, y; cin >> n >> x >> y;

    vector<char> a(n);

    for (int l = 0, r = x.size() - 1; l <= r; l++, r--)
    {
        // cerr << x[l] << " " << y[l] << nl;
        char L, R;
        if(x[l] <= y[l]) 
        {
            L = x[l], R = y[l];
        }
        else 
        {
            L = y[l], R = x[l];
        }

        char LL, RR;
        if(x[r] <= y[r]) 
        {
            LL = x[r], RR = y[r];
        }
        else 
        {
            LL = y[r], RR = x[r];
        }

        int mn = 100; char take;
        for(char i = 'a'; i <= 'z'; i++)
        {
            int score = abs(i - L) + abs(i - R);
            // cerr << score << nl;
            if(L != LL) score += abs(i - LL) + abs(i - RR);

            if(mn > score)
            {
                mn = score;
                take = i;
            }
        }
        cerr << mn << nl;
        a[l] = take, a[r] = take;
    }
    
    for(auto e : a) cout << e;
    cout << nl;

    return 0;
}