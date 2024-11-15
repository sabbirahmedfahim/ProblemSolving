#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
Strategy: Start deleting from the left until all duplicates are removed from the array,
then print the length of the deleted portion.
*/
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    set<int> s;
    for(auto &data : v) cin >> data;

    reverse(all(v));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(s.count(v[i])) break;
        else cnt++;
        s.insert(v[i]);
    }

    cout << n - cnt << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}