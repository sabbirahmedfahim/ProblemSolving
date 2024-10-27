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
    deque<char> dq;
    dq.push_back('3');
    dq.push_back('6');
    dq.push_back('3');
    dq.push_back('6');
    dq.push_back('6');
    if(n == 1 || n == 3) cout << -1 << nl;
    else if(n == 2) cout << 66 << nl;
    else if(n == 4) cout << 3366 << nl;
    else
    {
        int k = n-5;
        for (int i = 0; i < k; i++)
        {
            dq.push_front('3');
        }
        for(auto data : dq) cout << data;
        cout << nl;
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}