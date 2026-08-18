class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> ans;

        for(int i=0;i<n;i++){
            bool found=false;
            for(int j=i+1;j<n;j++){
                found=false;
                if(nums[j]>nums[i]){
                    ans.push_back(nums[j]);
                    found=true;
                    break;
                }
                else{
                    continue;
                }
            }
            if(found==false){
                for(int j=0;j<i;j++){
                    if(nums[j]>nums[i]){
                        ans.push_back(nums[j]);
                        found=true;
                        break;
                    }
                    else{
                        continue;
                    }
                }
                if(found==false){
                    ans.push_back(-1);
                }
            }

        }
    return ans;
    }
};