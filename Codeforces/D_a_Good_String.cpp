#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int cost(deque<char> x, char currGoodString)
{
    int res = 0;
    for(auto e : x) res += e != currGoodString;

    return res;
}
int rec(deque<char> dq, char currGoodString)
{
    if(dq.size() == 1) return cost(dq, currGoodString);

    deque<char> firstHalf, lastHalf;
    for (int i = 0; i < dq.size()/2; i++) firstHalf.push_back(dq[i]);
    for (int i = dq.size()/2; i < dq.size(); i++) lastHalf.push_back(dq[i]);
    // print(firstHalf); print(lastHalf);

    int leftNibo = cost(firstHalf, currGoodString) + rec(lastHalf, currGoodString + 1);
    int rightNibo = cost(lastHalf, currGoodString) + rec(firstHalf, currGoodString + 1);
    
    return min(leftNibo, rightNibo);
}
void solve()
{
    int n; string s; cin >> n >> s;

    deque<char> dq;
    for(auto e : s) dq.push_back(e);

    cout << rec(dq, 'a') << nl;

    // int totIteration = log2(n) + 1;
    // cerr << totIteration << nl;
    // int tmp = totIteration;
    
    // map<char, int> freq;
    // if(tmp == 2) tmp = 1;
    // for (char ch = 'a'; ; ch++)
    // {
    //     if(tmp == 0) 
    //     {
    //         freq[ch] = 1; break;
    //     }

    //     freq[ch] += tmp;
    //     tmp /= 2;
    // }
    // for(auto [x, y] : freq) cout << x<< " --> " << y << nl; return;
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