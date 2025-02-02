#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    float a, b; cin >> a >> b;

    cout << "floor " << a << " / " << b << " = " << floor(a/b) << nl;
    cout << "ceil " << a << " / " << b << " = " << ceil(a/b) << nl;
    cout << "round " << a << " / " << b << " = " << round(a/b) << nl;

    return 0;
}