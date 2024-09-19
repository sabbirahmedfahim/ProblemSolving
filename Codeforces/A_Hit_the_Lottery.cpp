#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    ans+= n/100;
    n = n%100;
    ans+= n/20;
    n = n%20;
    ans+= n/10;
    n = n%10;
    ans+= n/5;
    n = n%5;
    ans+= n/1;
    
    cout << ans;

    return 0;
}