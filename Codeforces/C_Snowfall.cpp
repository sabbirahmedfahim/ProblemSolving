#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> a(n);

    int two = 0, three = 0;
    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        a[i].second = data;

        if(data % 6 == 0) a[i].first = 6;
        else if(data % 2 == 0) a[i].first = 2;
        else if(data % 3 == 0) a[i].first = 3;
        else a[i].first = 1;

        two += a[i].first == 2;
        three += a[i].first == 3;
    }
    
    // print(a);
    sort(all(a));
    if(two >= three)
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i].first == 2) cout << a[i].second << " ";
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i].first == 1) cout << a[i].second << " ";
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i].first == 3) cout << a[i].second << " ";
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i].first == 6) cout << a[i].second << " ";
        }
    }
    else 
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i].first == 3) cout << a[i].second << " ";
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i].first == 1) cout << a[i].second << " ";
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i].first == 2) cout << a[i].second << " ";
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i].first == 6) cout << a[i].second << " ";
        }
    }

    
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}