#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
int cs = 1;
void solve()
{
    int p, l; cin >> p >> l; 
    int q = p - l; // not confirmed [update: it worked :D]

    if(q <= l) 
    {
        cout << "Case " << cs++ << ": ";
        cout << "impossible" << nl; return;
    }

    cout << "Case " << cs++ << ": ";
    vector<int> ans;
    for (int i = 1; i <= sqrt(q); i++)
    {
        if(q%i == 0)
        {
            if(i > l) ans.push_back(i);
            if(i != q/i && (q/i) > l) ans.push_back(q/i);
        }
    }

    sort(all(ans));
    print(ans);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}