#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    char c; cin >> c;

    if(c >= 48 && c <= 57) cout << "IS DIGIT" << nl;
    else if(c >= 65 && c <= 90) cout << "ALPHA" << nl << "IS CAPITAL" << nl;
    else cout << "ALPHA" << nl << "IS SMALL" << nl;

    return 0;
}