#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void dekhi(vector<int> v, int n)
{
    if(n == 1) 
    {
        sort(all(v)); for(auto data : v) cout << data << nl; cout << nl; return;
    }

    dekhi(v, n-1);
    for(auto data : v) cout << data << nl; cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> v(3); for(auto &e : v) cin >> e;

    dekhi(v, 2);

    return 0;
}