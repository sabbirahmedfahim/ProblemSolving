// UNSOLVED (Please solve it)
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ull n, q; cin >> n >> q;
    vector<ull> v(n);
    ull k = 0;
    for (ull i = 1; i <= n/2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            v[k] = i;
            k++;
        }
    }
    vector<ull> prefixSum(n);
    prefixSum[0] = v[0];
    for (ull i = 1; i < n; i++)
    {
        prefixSum[i] = v[i] + prefixSum[i - 1];
    }

    while (q--)
    {
        ull sum = 0;
        ull x, y;
        cin >> x >> y;
        x--, y--;
        if (x == 0) sum = prefixSum[y];
        else sum = prefixSum[y] - prefixSum[x - 1];
        cout << sum << nl;
    }
    

    return 0;
}