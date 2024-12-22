#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k, p; cin >> n >> k >> p;
    vector<ll> v(n); for(auto &data : v) cin >> data;
    int veds_score = k + *max_element(all(v));
    int varuns_score = p; bool is_taken = false;
    for (int i = 0; i < n; i++)
    {
        if(is_taken == false && v[i] == *max_element(all(v)))
        {
            is_taken = true; continue;
        }
        varuns_score += v[i];
    }
    if(veds_score == varuns_score) cout << "Equal" << nl;
    else if(veds_score > varuns_score) cout << "Ved" << nl;
    else cout << "Varun" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}