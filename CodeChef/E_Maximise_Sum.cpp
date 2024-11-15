#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    int cnt = 0;
    multiset<int> ml;
    while (n--)
    {
        int data; cin >> data;
        if(data >= 0) ml.insert(data);
        else 
        {
            ml.insert(-data); cnt++;
        }
    }
    
    ll store = 0;
    if(cnt%2) 
    {
        store = *ml.begin();
        ml.erase(ml.begin());
    }

    ll sum = 0;
    for(auto data : ml) sum += data;
    cout << sum - store << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}

// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long int
// #define all(v) v.begin(),v.end()
// #define print(v) for(auto data : v) cout << data << " "; cout << nl
// #define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
// using namespace std;
// void solve()
// {
//     int n; cin >> n;
//     ll sum = 0;
//     priority_queue<int> pq;
//     while (n--)
//     {
//         int data; cin >> data;
//         if(data >= 0) sum += data;
//         else pq.push(-data);
//     }
//     if(pq.size()%2 == 0)
//     {
//         while (!pq.empty())
//         {
//             sum += pq.top();
//             pq.pop();
//         }
//     }
//     else 
//     {
//         while (pq.size() > 1)
//         {
//             sum += pq.top();
//             cout << sum << nl;
//             pq.pop();
//         }
//         sum -= pq.top();
//     }

//     cout << sum << nl;
// }
// int main()
// {
//     iOS

//     int t; cin >> t; 
//     while (t--) solve();

//     return 0;
// }