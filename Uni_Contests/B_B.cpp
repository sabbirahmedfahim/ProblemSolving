#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int N = 1E6;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll x; cin >> x;
    set<int> primeList;
    bool comp[N+1] = {0};
    for (int i = 2; i <= N; i++)
    {
        if(comp[i]) continue;
        else 
        {
            primeList.insert(i); comp[i] = true; if(i >= x) break;
        }
        
        for (int j = i+i; j <= N; j+=i)
        {
            comp[j] = true;
        }
    }
    // print(primeList);
    if(*primeList.lower_bound(x) == x) cout << x << nl;
    else cout << *primeList.upper_bound(x) << nl;

    return 0;
}