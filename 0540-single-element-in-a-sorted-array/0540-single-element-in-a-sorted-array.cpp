class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();

        int count =0;
        for(int i=0;i<n;i++){
            if(n==1)
                return nums[0];
            if(i!=0 && i!=n-1){
                if ( nums[i]==nums[i+1] || nums[i]==nums[i-1]){
                    continue;
                }
                else {
                    return nums[i];
                }
                
            }
            if(i==0 && nums[i]!=nums[i+1]){
                return nums[0];
            }
            
            else if (i==n-1 && nums[i]!=nums[i-1]){
                return nums[n-1];
            }
            
        }
    return -1;  
    }
};