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
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int odd = 0, even = 0, oddIdx, evenIdx;
    for (int i = 0; i < n; i++)
    {
        if(a[i] & 1)
        {
            odd++; oddIdx = i + 1;
        }
        else
        {
            even++; evenIdx = i + 1;
        }
    }
    
    if(odd == 1) cout << oddIdx << nl;
    else cout << evenIdx << nl;

    return 0;
}