#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, r, b; cin >> n >> r >> b;
    
    string x; int Mn = 200;
    int R, B;
    for (int i = 1; i <= 100; i++) // O(100 * 100) -> O(1E4)
    {
        string y;
        R = r, B = b;
        while (R)
        {
            for (int j = 1; j <= i; j++)
            {
                if(R)
                {
                    y += 'R';
                    R--;
                }
            }
            if(R == 0) break;

            if(B)
            {
                y += 'B'; B--;
            }
        }
        string z; 
        for(auto e : y)
        {
            if(z.back() == 'R' && B) z += 'B', B--, z += e;
            else z += e;
        }
        // cout << y << nl;

        int CurMn = 0;
        for (int j = 0; j < z.size(); )
        {
            int cnt = 0;
            while (j < z.size() && z[j] == 'R')
            {
                cnt++, j++;
            }
            if(cnt >= CurMn) CurMn = cnt;
            
            cnt = 0;
            while (j < z.size() && z[j] == 'B')
            {
                cnt++, j++;
            }
            if(cnt >= CurMn) CurMn = cnt;
        }
        
        if(CurMn <= Mn)
        {
            x = z; Mn = CurMn;
        }
    }
    
    cout << x << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}