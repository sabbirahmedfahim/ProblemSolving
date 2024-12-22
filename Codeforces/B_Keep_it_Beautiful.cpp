#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<ll> a, b;
    bool is_on = false;
    for (int i = 0; i < n; i++)
    {
        ll data; cin >> data;
        if(i == 0)
        {
            a.push_back(data); cout << 1;
        }
        else if(!is_on && a.back() <= data)     
        {
            a.push_back(data); cout << 1;
        }
        else if(!is_on && a.back() > data) 
        {
            if(data <= a.front())
            {
                is_on = true; b.push_back(data); cout << 1;
            }
            else cout << 0;
        }
        else if(is_on && b.back() <= data && data <= a.front())
        {
            b.push_back(data); cout << 1;
        }
        else cout << 0;
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}