/*
Find and store all subsequences with sum equal to the target using recursion.
*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void f(vector<vector<int>> & res, vector<int> a, vector<int> &vec, int target, int curr, int sum)
{
    if(curr == a.size())
    {
        if(sum == target) res.push_back(vec);
        return;
    }

    // nibo
    vec.push_back(a[curr]); sum += a[curr];
    f(res, a, vec, target, curr + 1, sum);

    // nibo na
    vec.pop_back(); sum -= a[curr];
    f(res, a, vec, target, curr + 1, sum);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> a = {1, 2, 3, 5, 6, 7};
    vector<vector<int>> res;
    vector<int> vec;
    f(res, a, vec, 7, 0, 0);

    for(auto e : res)
    {
        print(e);
    }

    return 0;
}