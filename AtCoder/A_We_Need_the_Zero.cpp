// Up-solved (directly) after reviewing others' approaches (YouTube)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
input: 
5
3
1 2 5
3
1 2 3
4
0 1 2 3
4
1 2 2 3
1
1

Solution approach:
1 -> 0001, 2 -> 0010, 3 -> 0011, 4 -> 0100, 5 -> 0101
6 -> 0110, 7 -> 0111, 8 -> 1000, 9 -> 1001

**Test Case Explanation (First Test Case):**
n = 3
v = [1, 2, 5]

// loop-1
0 ⊕ 1 => 0000 ⊕ 0001 => 0001 => 1
1 ⊕ 2 => 0001 ⊕ 0010 => 0011 => 3
3 ⊕ 5 => 0011 ⊕ 0101 => 0110 => 6
now, x = 6

// loop-2
6 ⊕ 1 => 0110 ⊕ 0001 => 0111 => 7
6 ⊕ 2 => 0110 ⊕ 0010 => 0100 => 4
6 ⊕ 5 => 0110 ⊕ 0101 => 0011 => 3
Updated array elements: v = [7, 4, 3]

// loop-3
0 ⊕ 7 => 0000 ⊕ 0111 => 0111 => 7
7 ⊕ 4 => 0111 ⊕ 0100 => 0011 => 3
3 ⊕ 3 => 0011 ⊕ 0011 => 0010 => 0
now, y = 0
*/
void solve()
{
    int n; cin>>n;
    vector<int> v(n); 
    input(v);
    int x = 0;
    for (int i = 0; i < n; i++) // loop-1
    {
        x ^= v[i];
    }
    for (int i = 0; i < n; i++) // loop-2
    {
        v[i] ^= x;
    }
    int y = 0;
    for (int i = 0; i < n; i++) // loop-3
    {
        y ^= v[i];
    }
    cout << ((y == 0)? x : -1) << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}