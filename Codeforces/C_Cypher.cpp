#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto &data : v) cin >> data;
    for (int i = 0; i < n; i++)
    {
        int k; string s; cin >> k >> s;
        while (!s.empty())
        {
            (s.back() == 'D')? v[i]++ : v[i]-- ;
            if(v[i] == 10) v[i] = 0;
            if(v[i] == -1) v[i] = 9;
            s.pop_back();
        }
    }
    print(v);
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}