/*
Find and return one subsequence whose sum equals the target using recursion.
Returns as soon as such a subsequence is found.
*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
// Flipping true/false doesn't affect the result — just keep the logic consistent throughout.
bool f(vector<vector<int>> & res, vector<int> a, vector<int> &vec, int target, int curr, int sum)
{
    if(curr == a.size())
    {
        if(sum == target) 
        {
            res.push_back(vec); return true;
        }
        return false;
    }

    // nibo
    vec.push_back(a[curr]); sum += a[curr];
    if(f(res, a, vec, target, curr + 1, sum) == true) return true; 
    // else return false; // no, ami dekhbo na niye target sum pawa jay kina

    // nibo na
    vec.pop_back(); sum -= a[curr];
    if(f(res, a, vec, target, curr + 1, sum) == true) return true;
    else return false;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> a = {1, 2, 3, 5, 6, 7};
    vector<vector<int>> res;
    vector<int> vec;
    bool ok = f(res, a, vec, 7, 0, 0);

    if(!ok)
    {
        cout << "Doesn't Exists" << nl; return 0;
    }

    print(res[0]);

    return 0;
}
// https://youtu.be/eQCS_v3bw0Q?si=PddoUVleECD8pJVl&t=689 ***