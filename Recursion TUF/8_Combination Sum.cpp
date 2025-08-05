// https://leetcode.com/problems/combination-sum/description/
class Solution {
public:
    void f(vector<int>& candidates, int target, set<vector<int>>& res, vector<int> a, int sum, int curr)
    {
        if(curr == candidates.size())
        {
            if(sum == target) 
            {
                res.insert(a);
            }
            return;
        }
        if(sum >= target)
        {
            if(sum == target) res.insert(a);
            return;
        }

        // nibo
        a.push_back(candidates[curr]), sum += candidates[curr];
        f(candidates, target, res, a, sum, curr);

        // niboba
        a.pop_back(); sum -= candidates[curr];
        f(candidates, target, res, a, sum, curr + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        set<vector<int>> res;
        vector<int> a;

        f(candidates, target, res, a, 0, 0);
        vector<vector<int>> finalRes;

        for(auto vec : res)
        {
            finalRes.push_back(vec);
        }

        return finalRes;
    }
};