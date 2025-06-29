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

    ll finalSum = 0, curSum = 0;
    for (int i = 0; i < n; i++)
    {
        curSum += a[i];
        finalSum = max(finalSum, curSum);

        if(curSum <= 0) curSum = 0;
    }

    if(*max_element(all(a)) < 0) finalSum = *max_element(all(a));
    
    cout << finalSum << nl;

    return 0;
}