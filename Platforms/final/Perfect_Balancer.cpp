#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<ll> prefixSum(n);
    prefixSum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + v[i];
    }
    vector<ll> suffixSum(n);
    ll pref_index = 0;
    suffixSum[pref_index] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        pref_index++;
        suffixSum[pref_index] = suffixSum[pref_index - 1] + v[i];
    }
    reverse(suffixSum.begin(), suffixSum.end());

    for (int i = 0; i < n; i++)
    {
        if(suffixSum[i] == prefixSum[i])
        {
            cout << suffixSum[i] << " " << i+1 << nl;
            return 0;
        }
    }

    cout << "UNSTABLE" << nl;

    return 0;
}