#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int five_thousands = (n/500)*1000;
    n %= 500;

    int five = (n/5)*5;

    cout << five_thousands + five << nl;

    return 0;
}