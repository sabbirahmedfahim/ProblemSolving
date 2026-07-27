#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void test()
{
    int sum = 0;
    set<int> st;
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        cerr << sum << " ";
        // cout << sum % 10 << " ";
        st.insert(sum % 10);
    }
    
    // cout << st.size() << nl;
    // print(st);
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    test();

    return 0;
}
/*
1 -> 1
2 -> 3
3 -> 6
4 -> 0
5 -> 5
7 -> 8

0 1 3 5 6 8 
*/