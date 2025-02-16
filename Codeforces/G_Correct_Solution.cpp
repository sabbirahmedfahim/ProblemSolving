#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string n, m; cin >> n >> m;

    sort(all(n));
    // cout << n << nl;
    for (int i = 0; i < n.size()-1; i++)
    {
        if(n[i] == '0') 
        {
            swap(n[i], n[i+1]); i++;
        }
    }
    // cout << n << nl;

    if(n == m) cout << "OK" << nl;
    else cout << "WRONG_ANSWER" << nl;

    return 0;
}