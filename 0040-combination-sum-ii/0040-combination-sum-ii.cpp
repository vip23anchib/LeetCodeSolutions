class Solution {
public:

    void solve(int ind, int target,
               vector<int>& arr,
               vector<vector<int>>& ans,
               vector<int>& ds) {

        if(ind == arr.size()) {
            if(target == 0) {
                ans.push_back(ds);
            }
            return;
        }

        if(arr[ind] <= target) {

            ds.push_back(arr[ind]);

            solve(ind + 1,
                  target - arr[ind],
                  arr, ans, ds);

            ds.pop_back();
        }

        int next = ind + 1;

        while(next < arr.size() &&
              arr[next] == arr[ind]) {
            next++;
        }

        solve(next,
              target,
              arr, ans, ds);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates,
                                         int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> ds;

        solve(0, target, candidates, ans, ds);

        return ans;
    }
};