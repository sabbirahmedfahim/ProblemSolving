#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    cout << n/365 << " years" << nl; n %= 365;
    cout << n/30 << " months" << nl; n %= 30;
    cout << n << " days" << nl; 

    return 0;
}