#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n,i; cin >> n >> i;
    if((n>>i) & 1) cout << "true" << nl;
    else cout << "false" << nl;

    return 0;
}