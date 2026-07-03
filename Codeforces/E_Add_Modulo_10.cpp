// resolved from the Editorial (worth solving from tutorial because it really makes sense)
/*
observation-1: if num is div by 5, then it will be xxx0, so it can't be updated after once
observation-2: if no num is div by 5, then there are 1,3,7,9 -> they will easily moved to 2,4,6,8
and we noticed a sequence that after each 4 turn it increases +20

so 12, 32, 52, ... 
   22, 42, 62, ...
never meet. here comes num % 20

thats it
*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    bool have5 = false;
    for(auto &e : a) 
    {
        if(e % 5 == 0) 
        {
            have5 = true;
            if(e % 10 == 5) e += 5;
        }
    }
    if(have5)
    {
        sort(all(a));
        if(a.front() == a.back()) cout << "Yes" << nl;
        else cout << "No" << nl;
        return;
    }


    bool have2 = false, have12 = false;
    for(auto &e : a)
    {
        while (e % 20 != 2 && e % 20 != 12)
        {
            e += e % 10;
        }
        
        if(e % 20 == 2) have2 = true;
        if(e % 20 == 12) have12 = true;
    }
    // print(a);

    if(have2 && have12) cout << "No" << nl;
    else cout << "Yes" << nl;
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