#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll m, a, b, c; cin >> m >> a >> b >> c;
    ll a_te_seat_ache = m, b_te_seat_ache = m;
    ll seat_filled_a = 0, seat_filled_b = 0, seat_filled_c = 0; 

    seat_filled_a = min(a_te_seat_ache, a);
    a_te_seat_ache -= seat_filled_a;

    seat_filled_b = min(b_te_seat_ache, b);
    b_te_seat_ache -= seat_filled_b;

    ll c_er_jonno_seat_ache = a_te_seat_ache + b_te_seat_ache;
    seat_filled_c = min(c_er_jonno_seat_ache, c);

    cout << seat_filled_a + seat_filled_b + seat_filled_c << nl;
    // cout << "a-> " << seat_filled_a << nl << "b-> " << seat_filled_b << nl;
    // cout << "c-> " << seat_filled_c << nl << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}