#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int n; ll s; cin >> n >> s;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;

    int cnt_sml_segment = 1e5; ll sum = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        sum += v[r];
        if(sum >= s)
        {
            cnt_sml_segment = min(cnt_sml_segment, r-l+1);
            // sum -= v[l]; l++;
            while (1)
            {
                sum -= v[l]; l++;
                if(sum < s) break;
                cnt_sml_segment = min(cnt_sml_segment, r-l+1);
            }
        }
    }

    cout << ((cnt_sml_segment == 1e5)? -1 : cnt_sml_segment) << nl;

    return 0;
}