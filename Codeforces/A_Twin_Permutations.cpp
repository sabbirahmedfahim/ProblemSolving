// Up-solved after reviewing others' approaches (YouTube)
#include <bits/stdc++.h>
#define nl '\n'
#define sp " "
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) // 1 - based index
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        // approach: i -> n - arr[i] + 1
        v[i] = n - v[i] + 1;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    cout << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}