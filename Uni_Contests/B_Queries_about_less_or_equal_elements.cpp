// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve() // manually
{
    int n, m; cin >> n >> m; 
    vector<ll> a(n), b(m); for(auto &data : a) cin >> data; for(auto &data : b) cin >> data;
    sort(all(a)); // sort ***

    for (int i = 0; i < m; i++)
    {
        ll target = b[i]; 
        // cout << target << " ";
        int mid, l = 0, r = n-1; // n, m are different, be careful
        while(l <= r)
        {
            mid = l+(r-l)/2;
            if(target >= a[mid]) l = mid+1; 
            else r = mid-1; 
        } 
        cout << l << " ";
    }
}
void solve2() // using function
{
    int n, m; cin >> n >> m; 
    vector<ll> a(n), b(m); for(auto &data : a) cin >> data; for(auto &data : b) cin >> data;
    sort(all(a)); // sort ***

    for (int i = 0; i < m; i++)
    {
        ll target = b[i]; 
        int idx = upper_bound(all(a), target) - a.begin();
        cout << idx << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // solve(); // AC
    solve2(); 

    return 0;
}