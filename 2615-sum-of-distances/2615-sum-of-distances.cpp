class Solution {
public:
    vector<long long> distance(vector<int>& nums) {

        int n = nums.size();
        vector<long long> ans(n, 0);

        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        for(auto& [value, indices] : mp) {

            int m = indices.size();

            vector<long long> prefix(m + 1, 0);

            for(int i = 0; i < m; i++) {
                prefix[i + 1] = prefix[i] + indices[i];
            }

            for(int i = 0; i < m; i++) {

                long long pos = indices[i];

                long long left =
                    pos * i - prefix[i];

                long long right =
                    (prefix[m] - prefix[i + 1])
                    - pos * (m - i - 1);

                ans[pos] = left + right;
            }
        }

        return ans;
    }
};