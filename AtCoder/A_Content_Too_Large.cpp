#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, x; cin >> n >> x;
    int sum = 0;
    while (n--)
    {
        int data;cin>>data;
        sum+= data;
    }
    
    if(sum <= x) cout << "Yes" << nl;
    else cout << "No" << nl;

    return 0;
}