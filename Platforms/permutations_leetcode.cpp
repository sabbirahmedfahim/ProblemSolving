// origin:  https://leetcode.com/problems/permutations/
// i/o is added to understand the procedure(recursion) 
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
class Solution {
private:
    void rec(vector<int> v, vector<int> &nums, vector<vector<int>> &res, vector<bool> &taken) 
    {
        if (v.size() == nums.size()) 
        {
            cout << "✅ pb done _____ ";
            print(v);
            res.push_back(v);
            return;
        }

        for (int i = 0; i < taken.size(); i++) 
        {
            if (!taken[i]) 
            {
                v.push_back(nums[i]);
                taken[i] = true;
                rec(v, nums, res, taken);

                v.pop_back();
                taken[i] = false;
                /*
                understand, jokon freq 2 theke return ashbe, 2 false kore dibe, then 1 also false hoye jabe,
                thennnnnn, 1 pop korbe na karon 2 er pore tho 3 ashe tai naaa? so 1 3 freq create hobe.
                */

                cout << "#" << i << " --> ";
                if(v.empty()) cout << " empty" << nl;
                else print(v);
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<int> v;
        vector<vector<int>> res;
        vector<bool> taken(nums.size(), false);
        rec(v, nums, res, taken);
        return res;
    }
};
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &e : nums) cin >> e;

    Solution sol;
    vector<vector<int>> result = sol.permute(nums);

    for (auto &perm : result) 
    {
        print(perm);
    }

    return 0;
}

/*
RECURSION TREE

Level 0: v = []

|-- i=0 → v = [1], taken = [1, 0, 0]
|   |-- i=1 → v = [1, 2], taken = [1, 1, 0]
|   |   |-- i=2 → v = [1, 2, 3], taken = [1, 1, 1]
|   |   |   ✅ Output: [1, 2, 3]
|   |   |-- Backtrack → v = [1, 2], taken = [1, 1, 0]
|   |-- Backtrack → v = [1], taken = [1, 0, 0]
|   |-- i=2 → v = [1, 3], taken = [1, 0, 1] // ***
|   |   |-- i=1 → v = [1, 3, 2], taken = [1, 1, 1]
|   |   |   ✅ Output: [1, 3, 2]
|   |   |-- Backtrack → v = [1, 3], taken = [1, 0, 1]
|   |-- Backtrack → v = [1], taken = [1, 0, 0]
|-- Backtrack → v = [], taken = [0, 0, 0]

|-- i=1 → v = [2], taken = [0, 1, 0]
|   |-- i=0 → v = [2, 1], taken = [1, 1, 0]
|   |   |-- i=2 → v = [2, 1, 3], taken = [1, 1, 1]
|   |   |   ✅ Output: [2, 1, 3]
|   |   |-- Backtrack → v = [2, 1], taken = [1, 1, 0]
|   |-- Backtrack → v = [2], taken = [0, 1, 0]
|   |-- i=2 → v = [2, 3], taken = [0, 1, 1]
|   |   |-- i=0 → v = [2, 3, 1], taken = [1, 1, 1]
|   |   |   ✅ Output: [2, 3, 1]
|   |   |-- Backtrack → v = [2, 3], taken = [0, 1, 1]
|   |-- Backtrack → v = [2], taken = [0, 1, 0]
|-- Backtrack → v = [], taken = [0, 0, 0]

|-- i=2 → v = [3], taken = [0, 0, 1]
|   |-- i=0 → v = [3, 1], taken = [1, 0, 1]
|   |   |-- i=1 → v = [3, 1, 2], taken = [1, 1, 1]
|   |   |   ✅ Output: [3, 1, 2]
|   |   |-- Backtrack → v = [3, 1], taken = [1, 0, 1]
|   |-- Backtrack → v = [3], taken = [0, 0, 1]
|   |-- i=1 → v = [3, 2], taken = [0, 1, 1]
|   |   |-- i=0 → v = [3, 2, 1], taken = [1, 1, 1]
|   |   |   ✅ Output: [3, 2, 1]
|   |   |-- Backtrack → v = [3, 2], taken = [0, 1, 1]
|   |-- Backtrack → v = [3], taken = [0, 0, 1]
|-- Backtrack → v = [], taken = [0, 0, 0]
*/