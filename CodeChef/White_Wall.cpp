// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    int opToRepair = 0;
    for (int i = 0; i < n-2; i++)
    {
        int r = 0, g = 0, b = 0;
        if(s[i] == 'R') r++;
        else if(s[i] == 'G') g++;
        else b++;

        if(s[i+1] == 'R') r++;
        else if(s[i+1] == 'G') g++;
        else b++;

        if(s[i+2] == 'R') r++;
        else if(s[i+2] == 'G') g++;
        else b++;

        if(r == 1 && g == 1 && b == 1) continue;

        /* last er ta cng korle vala na? Hmmmm */

        if(r == 2 && g == 1 && b == 0) 
        {
            opToRepair++;
            for (int j = i+2; j >= i; j--)
            {
                if(s[j] == 'R')
                {
                    s[j] = 'B'; break;
                }
            }
        }    

        if(r == 2 && g == 0 && b == 1)
        {
            opToRepair++;
            for (int j = i+2; j >= i; j--)
            {
                if(s[j] == 'R')
                {
                    s[j] = 'G'; break;
                }
            }
        }    

        if(r == 1 && g == 2 && b == 0)
        {
            opToRepair++;
            for (int j = i+2; j >= i; j--)
            {
                if(s[j] == 'G')
                {
                    s[j] = 'B'; break;
                }
            }
        }    

        if(r == 1 && g == 0 && b == 2)
        {
            opToRepair++;
            for (int j = i+2; j >= i; j--)
            {
                if(s[j] == 'B')
                {
                    s[j] = 'G'; break;
                }
            }
        }    

        if(r == 0 && g == 1 && b == 2)
        {
            opToRepair++;
            for (int j = i+2; j >= i; j--)
            {
                if(s[j] == 'B')
                {
                    s[j] = 'R'; break;
                }
            }
        } 

        if(r == 0 && g == 2 && b == 1)
        {
            opToRepair++;
            for (int j = i+2; j >= i; j--)
            {
                if(s[j] == 'G')
                {
                    s[j] = 'R'; break;
                }
            }
        }       

        // 0,1,2 combination done [hopefully string allocation has a logical error]

        // ----------------------------

        // need a greedy approach?

        if(r == 3 && g == 0 && b == 0)
        {
            opToRepair += 2;
            s[i+1] = 'G'; s[i+2] = 'B';
        }    
        if(r == 0 && g == 3 && b == 0)
        {
            opToRepair += 2; 
            s[i+1] = 'R'; s[i+2] = 'B';
        }    
        if(r == 0 && g == 0 && b == 3)
        {
            opToRepair += 2;
            s[i+1] = 'R'; s[i+2] = 'G';
        } 
    }

    cout << opToRepair << nl;

    cout << s << nl;
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}