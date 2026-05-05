#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<long double> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    

    long double curr = 0, ans = 0, howMany = 0;
    for (int i = 1, j = 1; i <= n; i++)
    {
        curr += a[i];

        if(i >= k)
        {
            ans += curr; howMany++;

            curr -= a[j++];
        }
    }
    
    cout << fixed << setprecision(10) << (ans / howMany) << nl;
    
    return 0;
}