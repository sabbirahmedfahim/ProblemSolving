#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;
    sort(all(s));

    string x = "act";
    if(s == x) cout << "Yes";
    else cout << "No";

    return 0;
}