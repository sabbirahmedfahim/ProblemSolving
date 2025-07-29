/*
Print all subsequences of a given array using recursion
*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void f(vector<int> a, int curr, vector<int> & now) // O(2ⁿ)
{
    if(curr == a.size()) // base case
    {
        if(now.empty()) cout << "{}"; else { print(now); };
        return;
    }
    
    // nibo
    now.push_back(a[curr]);
    f(a, curr + 1, now);
    
    // nibo na
    now.pop_back();
    f(a, curr + 1, now);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    vector<int> a = {1, 2, 2}; // {}, {1}, {2}, {2}, {1, 2}, {1, 2}, {2, 2}, {1, 2, 2}
    
    vector<int> now;
    f(a, 0, now);
    
    return 0;
}
// remember (not memorize) the pattern, this is a general form of using recursion in most of the statements