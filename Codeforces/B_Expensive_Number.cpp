#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    string n; cin >> n;
    deque<int> a;

    for (int i = 0; i < n.size(); i++)
    {
        a.push_back(n[i]-'0');
    }
    
    // while (n)
    // {
    //     a.push_back(n%10);
    //     n /= 10;
    // }
    
    // reverse(all(a));
    // print(a);

    int withOutZero = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] == 0) break;

        withOutZero++;
    }

    if(withOutZero == a.size()) cout << a.size() - 1 << nl;
    else 
    {
        int toDelete = 0;
        while (a.back() == 0)
        {
            toDelete++;
            a.pop_back();
        }

        for (int i = 0; i < a.size()-1; i++)
        {
            if(a[i] > 0) toDelete++;
        }
        
        cout << toDelete << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}