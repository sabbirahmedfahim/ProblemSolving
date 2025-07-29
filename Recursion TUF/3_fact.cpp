#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int fact(int n)
{
    if(n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cout << fact(3) << nl;

    return 0;
}