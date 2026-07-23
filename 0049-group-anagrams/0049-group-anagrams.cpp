class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string copy=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(copy);

        }
        vector<vector<string>> ans;
        for (auto x: mp){
            ans.push_back(x.second);
        }
    return ans;   
    }
};