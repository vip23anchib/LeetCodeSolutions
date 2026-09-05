class Solution {
public:

    vector<vector<int>> ans;
    vector<int> curr;

    void solve(vector<int>& nums, int index)
    {
        
        int n=nums.size();
        if(index>=n){
    
            ans.push_back(curr);
            return;
        }

        curr.push_back(nums[index]);
        solve(nums,index+1);

        curr.pop_back();

        solve(nums,index+1);

    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        solve(nums, 0);
        set <vector<int>> st;
        for(int i=0;i<ans.size();i++){
            st.insert(ans[i]);
        }
        vector<vector<int>> final;
        for(auto &i:st){
            final.push_back(i);
        }

        return final;
    }
};