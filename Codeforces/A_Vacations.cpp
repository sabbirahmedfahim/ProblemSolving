#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
0 means must rest
*/
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int curr = 0; // let, 0 -> rest, 1 -> contest, 2 -> gym
    int cnt = 0;

    for (int i = 0; i < n; )
    {
        if(a[i] == 0)
        {
            curr = 0; cnt++; i++;
        }
        else if(a[i] == 1)
        {
            if(curr == 1) { curr = 0; cnt++; }
            else curr = 1;
            i++;
        }
        else if(a[i] == 2)
        {
            if(curr == 2) { curr = 0; cnt++; }
            else curr = 2;
            i++;
        }
        else if(a[i] == 3 && (curr == 1 || curr == 2))
        {
            while (i < n && a[i] == 3)
            {
                if(curr == 1) curr = 2;
                else curr = 1;
                i++;
            }
        }
        else if(a[i] == 3)
        {
            int nextNonThreeItem = 0, dist = -1;
            for (int j = i; j < n; j++)
            {
                if(a[j] != 3)
                {
                    nextNonThreeItem = a[j]; dist = j - i;

                    break;
                }
            }
            
            if(nextNonThreeItem == 0)
            {
                while (i < n && a[i] == 3)
                {
                    if(curr == 1) curr = 2;
                    else curr = 1;
                    i++;
                }
            }
            else 
            {
                curr = nextNonThreeItem;
                if(dist % 2 == 0)
                {
                    if(curr == 1) curr = 2;
                    else curr = 1;
                }
                while (i < n && a[i] == 3)
                {
                    if(curr == 1) curr = 2;
                    else curr = 1;
                    i++;
                }
            }
        }

        // cerr << i << " --> " << cnt << nl;
    }
    
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}