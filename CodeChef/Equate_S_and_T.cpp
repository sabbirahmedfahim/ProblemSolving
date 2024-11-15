// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
input: 
1
2 2
bbaa aabb
*/
void solve()
{
    int n, m; string a, b; cin >> n >> m >> a >> b;
    int cnt_a = 0, cnt_b = 0;
    for(auto data : a) if(data == 'a') cnt_a++;
    for(auto data : b) if(data == 'a') cnt_b++;

    if(a == b) 
    {
        cout << "Yes" << nl; return;
    }

    auto it_a = a.find('a');
    auto it_b = b.find('a');

    // cout << ((cnt_a == cnt_b )? "Yes" : "No" ) << nl;
    if(cnt_a == cnt_b)
    {
        if(it_a != it_b or it_a == -1 || it_b == -1) cout << "No" << nl; // -1 means v.end()
        else cout << "Yes" << nl;
    }
    else cout << "No" << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}