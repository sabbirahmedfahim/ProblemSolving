#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    
    int pos; cin >> pos; pos--; v.erase(v.begin()+ pos);
    // print(v);
    
    int l, r; cin >> l >> r; l--, r--;
    v.erase(v.begin()+l, v.begin()+r);
    cout << v.size() << nl;
    print(v);

    return 0;
}