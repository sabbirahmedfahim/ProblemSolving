#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
multiset<int> ml;
const int N = 4E5 + 8;
void solve()
{
    for (int i = 1; i <= N; i++) ml.insert(i);

    int n, k; cin >> n >> k;
    multiset<int> A, taken;
    for (int i = 0; i < n; i++) 
    {
        int data; cin >> data; A.insert(data);
    }

    while (1)
    {
        while (*ml.begin() > *A.begin())
        {
            ml.erase(ml.begin());
        }
        for (int i = 0; i < k; i++)
        {
            
        }
        
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