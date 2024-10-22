#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
Approach: 
   - The goal is to determine the minimum number of operations needed to set all elements of the array to 0.
   - The universe is destroyed if all elements become 0.
   - Steps:
      1. Find the leftmost and rightmost non-zero elements.
      2. If the array is already full of zeros, no operations are needed (output 0).
      3. If there are zeros between the leftmost and rightmost non-zero elements, at least 2 operations are required.
      4. Otherwise, a single operation suffices to make all elements zero.

Test Case Analysis:
   0 2 3 0 1 2 0 -> mex = 4
=> 4 4 4 4 4 4 4 [op-1]
=> 0 0 0 0 0 0 0 [op-2]
   0 0 0 0 
=> it is already matched with the conditon. [op-0]
   0 1 2 3 4 -> from 1-4, mex is 0
=> 0 0 0 0 0 [op-1] 
single doubt: what if input is 0 1 2 4 ? 
*/
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0, j = n-1; i < n, j >= 0; i++, j--)
    {
        if(v[i] != 0 && l == -1) l = i;
        if(v[j] != 0 && r == -1) r = j;
        if(r != -1 && l != -1) break;
    }
    bool isZero = false;
    for (int i = l; i <= r && !isZero; i++)
    {
        if(v[i] == 0) isZero = true;
    }
    if(l == -1 && r == -1) cout << 0 << nl;
    else if(isZero) cout << 2 << nl;
    else cout << 1 << nl; 
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}