#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool isPalindrome(int x)
{
    vector<int> A, B;
    while (x)
    {
        A.push_back(x % 10);
        x /= 10;
    }
    
    B = A;
    reverse(all(B));

    return A == B;
}
void solve()
{
    int n; cin >> n;

    if(n % 12 != 10) 
    {
        int val = n % 12; // mod -> 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11
        cout << val << " " << n - val << nl;
        return;
    }
    
    // only 10 as a rem is a problem
    for (int i = 1; i <= n; i++)
    {
        if(isPalindrome(i) && (n - i) % 12 == 0)
        {
            cout << i << " " << n - i << nl;
            return;
        }
    }

    cout << -1 << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}