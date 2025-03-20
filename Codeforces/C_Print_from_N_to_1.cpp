#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void rec(int n)
{
    if(n == 0) return;

    if(n == 1) cout << n;
    else cout << n << " ";
    rec(n-1);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;    
    rec(n);
    cout << nl;

    return 0;
}