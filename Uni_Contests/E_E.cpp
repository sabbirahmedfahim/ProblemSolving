#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; ll x; cin >> x; vector<ll> v(n); for(auto &data : v) cin >> data;
    
    vector<ll> prefSum(n);
    prefSum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefSum[i] = prefSum[i-1] + v[i];
    }
    // print(prefSum);
    int cnt = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        
    }
    

    return 0;
}