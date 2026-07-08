#include <bits/stdc++.h>
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int ask(string x)
{
    cout << "? " << x << nl;
    int jobab; cin >> jobab;

    return jobab;
}
void solve()
{
    int n; cin >> n;

    if(ask("0") == 0)
    {
        cout << "! ";
        for (int i = 0; i < n; i++)
        {
            cout << "1";
        }
        cout << nl;
        return;
    }

    string curr = "0";
    while (curr.size() < n)
    {
        string curr1 = curr + "1", curr2 = curr + "0";

        if(ask(curr1) == 1) curr = curr1;
        else if(ask(curr2) == 1) curr = curr2;
        else break;
    }
    while (curr.size() < n)
    {
        string curr1 = "1" + curr, curr2 = "0" + curr;

        if(ask(curr1) == 1) curr = curr1;
        else curr = curr2;
    }
    
    cout << "! " << curr << nl;
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}