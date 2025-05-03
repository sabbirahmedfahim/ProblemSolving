#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n; vector<int> a(n); for(auto &e : a) cin >> e;
    set<int> s; for(auto e : a) s.insert(e);

    int data ; cin >> data;
    if(!s.count(data)) cout << -1 << nl;
    else 
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i] == data)
            {
                cout << i << nl; return 0;
            }
        }
    }

    return 0;
}