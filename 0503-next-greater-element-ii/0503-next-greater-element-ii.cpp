class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            bool found=false;
            for(int j=i+1;j<i+n;j++){
                int ind=j%n;
                if(nums[ind]>nums[i]){
                    ans.push_back(nums[ind]);
                    found=true;
                    break;
                }
            }
            if(found==false){
                ans.push_back(-1);
            }
        }
    return ans;
    }
};