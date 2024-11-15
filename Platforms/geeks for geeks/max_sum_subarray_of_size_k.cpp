#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
long long maximum_sum_subarray(vector<int>& arr, int k) {
    long long mx = 0;
    for (int i = 0; i < k; i++)
    {
        mx += arr[i];
    }

    long long ans = mx;
    for (int i = k, j = 0; i < arr.size(); i++, j++) 
    {
        // cout << mx << nl;
        mx += arr[i];
        mx -= arr[j];
        ans = max(ans, mx);
    }

    return ans;
}
int main()
{
    iOS

    int n; cin >> n;
    vector<int> v(n);
    for(auto &data : v) cin >> data;
    // print(v);
    int k; cin >> k;

    cout << maximum_sum_subarray(v, k);

    return 0;
}
