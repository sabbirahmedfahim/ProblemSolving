// resolve
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    n++;
    vector<int> v(n), v2;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if(i == n-1) continue;
        v2.push_back(v[i]);
    }
    int last_element = v[n-1];

    sort(v2.begin(), v2.end());
    for (int i = 0; i < n-1; i++)
    {
        if(v2[i] <= last_element*2 && v2[i] > last_element) last_element = v2[i]; // swap(v[i], v[n-1]);
    } 
    cout << sum - last_element << nl; 
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}

// my approach
// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long int
// #define input(v) for(auto &data : v) cin >> data
// #define print(v) for(auto data : v) cout << data << " "; cout << nl
// #define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
// using namespace std;
// void solve()
// {
//     int n; cin >> n;
//     n++;
//     vector<int> v(n);
//     input(v);
//     int mx = 0;
//     for (int i = 0; i < n-1; i++)
//     {
//         if(v[i] <= v[n-1] * 2) mx = max(v[i], mx);
//     }
//     sort(v.begin(), v.end()-1);
//     for (int i = 0; i < n-1; i++)
//     {
//         if(v[i] <= v[n-1]*2) swap(v[i], v[n-1]);
//     }
//     ll sum = 0;
//     for (int i = 0; i < n-1; i++)
//     {
//         sum += v[i];
//     }
//     cout << min(sum+v[n-1]-mx, sum) << nl;
// }
// int main()
// {
//     FAJR_BOOST()

//     int t; cin >> t; 
//     while (t--) solve();

//     return 0;
// }