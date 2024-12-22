// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    string s; cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int k = i; 
        for (int j = i; j < n && j < i + 10; j++) // 10 times loop - implementation
        {
            if(s[j] - j > s[k] - k) k = j;
        }
        while (k > i)
        {
            s[k]--;
            swap(s[k-1], s[k]);
            k--;
        }
    }
    
    cout << s << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}