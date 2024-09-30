// this problem is originally from Samsung HackerRank contest
#include <bits/stdc++.h>
#include <numeric>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    int k = 1;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        list<ll> l;
        for (int i = 0; i < q; i++)
        {
            int data;
            cin >> data;
            l.push_back(data);
        }
        ll cnt;
        cout << "Case " << k << ": ";
        while (q--)
        {
            int m = l.front();
            cnt = 0;
            for (int i = 1; i <= n; i++)
            {
                if (gcd(i, n) == m)
                    cnt++;
            }
            l.pop_front();
            cout << cnt << " ";
        }
        k++;
        cout << nl;
    }

    return 0;
}