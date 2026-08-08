// resolved 
#include <bits/stdc++.h>
#define nl endl
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int ask(int x1, int x2, int x3)
{
    cout << "? " << x1 << " " << x2 << " " << x3 << nl;

    int respns; cin>> respns;

    return respns;
}
void solve()
{
    int n; cin >> n;
    
    int a = 1, b = 2, c = 3;

    while (true)
    {
        int jobab = ask(a, b, c);
        
        if(jobab == 0) break;

        int jemonKushiValueChange = rand() % 3;

        if(jemonKushiValueChange == 1) a = jobab;
        else if(jemonKushiValueChange == 2) b = jobab;
        else c = jobab;
    }
    
    cout << "! " << a << " " << b << " " << c << nl;
}
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    srand(time(0));

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}