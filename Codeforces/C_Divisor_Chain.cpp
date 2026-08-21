#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    
    return true;
}
void solve()
{
    int n; cin >> n;

    vector<int> ans;
    while (n != 1)
    {
        ans.push_back(n);

        if(isPrime(n)) n--;
        else 
        {
            bool touch = false;
            for (int i = 2; i * i <= n; i++)
            {
                int arekta = n / i;
                if(n % arekta == 0 && (n - arekta == 2))
                {
                    touch = true;
                    n -= arekta; break;
                }

                if(n % i == 0 && (n - i == 2 || !isPrime(n - i)) && touch == false)
                {
                    touch = true;
                    n -= i; break;
                }
            }

            if(!touch) n--;
        }
    }
    
    ans.push_back(1);
    print(ans);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}