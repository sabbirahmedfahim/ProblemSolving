#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int sum(int n)
{
    if(n == 0) return 0;
    return n + sum(n-1);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cout << sum(6) << nl; // sum of 1 to n
    
    return 0;
}