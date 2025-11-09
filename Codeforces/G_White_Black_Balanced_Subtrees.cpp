// lackings remains in the recursion part
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 4E3 + 5;
vector<int> adjList[N];
// int dp[N];
string s; 
// int subtree(int root, int n)
// {
//     if(root < 1 || root > n) return 0;

//     if(s[root] == 'W') return 1;
//     if(s[root] == 'B') return -1;
//     if(dp[root] != -1) return dp[root];

//     dp[root] = subtree(root, n) + subtree(root - 1, n) + subtree(root + 1, n);
// }
int cnt;
int subtree(int root)
{
    int sum; 
    if(s[root] == 'W') sum = 1;
    else sum = -1;

    for(auto child : adjList[root])
    {
        sum += subtree(child);
    }
    if(sum == 0) cnt++;

    return sum;
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 2; i <= n; i++) // n - 1
    {
        cin >> a[i];
        adjList[a[i]].push_back(i);
    }
    
    string x; cin >> x;
    s.push_back('0');
    s += x; // 1-based

    // memset(dp, -1, sizeof(dp));
    cnt = 0;
    subtree(1);

    cout << cnt << nl;

    for(auto &e : adjList)
    {
        e.clear();
    }
    s.clear();
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}