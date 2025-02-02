// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> ans;

    if(n & 1)
    {
        // while (n >= 3)
        // {
        //     ans.push_back(2); n /= 2;
        // }
        for (int i = 2; i <= n/2; i++) ans.push_back(2);
        ans.push_back(3);
    }
    else
    {
        for (int i = 1; i <= n/2; i++) ans.push_back(2);
    }

    cout << ans.size() << nl;
    print(ans);

    return 0;
}