#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int one = 0, two = 0, three = 0, four = 0;
    for(auto e : a)
    {
        one += e == 1;
        two += e == 2;
        three += e == 3;
        four += e == 4;
    }
    
    int ans = 0;
    ans += four; four = 0;

    while (three && one)
    {
        ans++;
        three--; one--;
    }
    // cerr << one << " " << two << " " << three << " " << four << nl;

    while (two >= 2)
    {
        two -= 2;
        ans++;
    }
    
    while (two && one)
    {
        if(two && one >= 2) 
        {
            two--; one -= 2; 
        }
        else // one == 1
        {
            two--; one--;
        }

        ans++;
    }
    
    ans += two;
    ans += three;
    ans += one / 4 + (one % 4 != 0);

    cout << ans << nl;

    return 0;
}