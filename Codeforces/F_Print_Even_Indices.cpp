#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void print_even_indices(vector<int> &v, int n)
{
    if(n < 0) return;
    cout << v[n] << ' ';
    print_even_indices(v, n-2);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n); for(auto &e : v) cin >> e;

    n--;
    if(n & 1) n--;
    print_even_indices(v, n);

    return 0;
}