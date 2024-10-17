#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for(auto cnt : v) cout << cnt << " ";
    cout << nl;
    ll cnt = 0; 
    vector<ll> sum_arr;
    ll last_val = v[n-1];
    ll temp = k;
    for (int i = 0; i <= n-1; i++)
    {
        if(v[i] == v[n-1]) 
        {
            cnt ++;
            if(i == n-1) 
            {
                sum_arr.push_back(cnt); break;
            }
        }
        else if(v[i+1] > v[i]+1)
        {
            cnt = 0; temp = k;
        }
        else if(temp > 0)
        {
            cnt ++;
            if(v[i] == v[i+1]) 
            {
                if(temp == 0) 
                {
                    sum_arr.push_back(cnt); cnt = 0;
                }
            }
            else if(v[i]+1 == v[i+1])
            {
                temp--;
            }
            // else 
        }
    }
    int j = n-1;
    // cnt = 0;
    // while (true)
    // {
    //     if(v[j] != v[j-1]) 
    //     {
    //         sum_arr.push_back(cnt); break;
    //     }
    //     cnt += v[j]; j--;
    // }
    // for(auto cnt : sum_arr) cout << cnt << " ";

    ll ans = 0;
    for (int i = 0; i < sum_arr.size(); i++)
    {
        cout << sum_arr[i] << " ";
    }
    // cout << ans << nl;
    
    cout << nl << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t; while(t--) solve();
    

    return 0;
}