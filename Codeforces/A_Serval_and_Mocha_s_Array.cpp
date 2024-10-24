// Up-solved after reviewing others' approaches (YouTube)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    input(v);
    bool canBeBeautiful = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            // if(gcd(v[i], v[j]) > n) // wrong understanding (find out why)
            /*
            Our goal is to check if the GCD of any two elements is less than or equal to 2.
            If it is, we can move these two elements to the front of the array,
            making the condition satisfied.
            If gcd(v[i], v[j]) <= 2, it does not directly ensure that the GCD of all other pairs will be greater than 2. 
            However, the presence of pairs with a low GCD suggests that there might be a way to reorder the array or 
            to create subarrays that fit the problem's requirements (in this case, being a "beautiful" or "good" array).
            */
            if(gcd(v[i], v[j]) <= 2)
            {
                canBeBeautiful = true; break;   
            }
        }
    }
    cout << ((canBeBeautiful)? "Yes" : "No") << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}