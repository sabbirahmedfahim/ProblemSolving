#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string f1, s1, f2, s2; cin >> f1 >> s1 >> f2 >> s2;

    if(s1 == s2) cout << "ARE Brothers" << nl;
    else cout << "NOT" << nl;

    return 0;
}