#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    string a, b; cin >> a >> b;
    cout << a.size() << " " << b.size() << nl; // done
    cout << a+b << nl; // done
    cout << b.front();
    for (int i = 1; i < a.size(); i++) cout << a[i];
    cout << " ";
    cout << a.front();
    for (int i = 1; i < b.size(); i++) cout << b[i];

    return 0;
}