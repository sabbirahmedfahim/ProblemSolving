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
    if(n <= 3)
    {
        if(n == 1) cout << 1 << nl;
        else cout << "NO SOLUTION" << nl; 
        return 0;
    }

    vector<int> res;
    for (int i = 2; i <= n; i += 2)
    {
        res.push_back(i);
    }
    res.push_back(1); 
    for (int i = 3; i <= n; i += 2)
    {
        res.push_back(i);
    }

    print(res);

    return 0;
}