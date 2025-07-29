#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int f(vector<int> a, int target, int sum, int curr) // O(2ⁿ)
{
    if(curr == a.size())
    {
        if(sum == target) return 1;
        return 0;
    }

    sum += a[curr];
    int nibo = f(a, 2, sum, curr + 1);
    
    sum -= a[curr];
    int nibona = f(a, 2, sum, curr + 1);

    return nibo + nibona;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> a = {1, 2, 1, 1};

    cout << f(a, 2, 0, 0) << nl;

    return 0;
}