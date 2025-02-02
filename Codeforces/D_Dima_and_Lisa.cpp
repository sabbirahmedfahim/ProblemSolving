// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
you are given an odd numer n ***
*/
bool isPrime(int x)
{
    if(x == 1 || x == 0) return false;
    int sz = sqrt(x); 
    for(int i = 2; i<=sz; i++)
    {
        if(x%i == 0) return false;
    }
    return true;
}
void solve()
{
    int n; cin >> n; 

    // edge case-1
    if(n == 3 || n == 5)
    {
        cout << 1 << nl; cout << n << nl; return;
    }

    ll x = -1, y = -1, z = -1;
    for(int i = n-1; i >= 2; i--)
    {
        if(isPrime(i))
        {
               x = i; break;
         }
    }
    for (int i = 2; i <= (n-x) && (x != -1); i++)
    {
         if(isPrime(i) && isPrime(n-x-i))
         {
               y = i; z = n - x - i; break;
         }
     }
        

    if(x != -1 && y != -1 && z != -1)
    {
         cout << 3 << nl;
        cout << x << " " << y << " " << z << nl; return;
      }
        
    // edge case
    if(x != -1 && isPrime(n-x)) 
    {
        cout << 2 << nl;
        cout << x << " " << n-x << nl;
    }
    else 
    {
        cout << 1 << nl;
        cout << n << nl ;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}   