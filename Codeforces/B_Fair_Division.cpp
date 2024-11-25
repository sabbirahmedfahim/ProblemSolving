#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    int two = 0, one = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        (v[i]%2)? one++ : two++;
        sum += v[i];
    }

    if(sum%2) cout << "NO" << nl;
    else
    {
        int half = sum/2, cur = 0;
        while (true)
        {
            if(two && cur + 2 <= half) 
            {
                cur += 2; two--;
            }
            else if(one && cur + 1 <= half)
            {
                cur++; one--;
            }
            else break;
        }
        if(two * 2 + one == half) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}