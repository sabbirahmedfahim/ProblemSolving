#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n; cin >> n; ll tmp = n-1;
    ll sum = 0; 
    while (tmp--)
    {
        int data; cin >> data; sum += data;
    }
    
    cout << ((n*(n+1))/2) - sum << nl;

    return 0;
}