#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a((n * 4) + 1);

    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        x[i] = i + 1;
    }
    
    int idx = 1, curr = 1;

    for (int i = 1; idx <= (n * 4); i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[idx++] = x[j];
            curr++;

            if(curr > n) curr = 1;
        }
        
        if(i % 2 == 1) reverse(all(x));
        else 
        {
            reverse(all(x));

            vector<int> tmp;
            for (int i = 0; i < n; i++)
            {
                tmp.push_back(x[curr++]);
                if(curr >= n) curr = 0;
            }
            
            x = tmp;
        }
    }
    
    for (int i = 1; i < (n * 4) + 1; i++)
    {
        cout << a[i] << " ";
    }
    
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