class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n=nums1.size();
        int m=nums2.size();

        vector<int>ans;

        for(int i=0;i<n;i++){
            bool found=false;
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    int ind=j+1;
                    while(ind<m){
                        if(nums2[ind]>nums2[j]){
                            ans.push_back(nums2[ind]);
                            found=true;
                            break;
                        }
                        else{
                            ind++;
                        }
                    }
                    if(found!=true){
                        ans.push_back(-1);
                    }
                    
                }
            }
        }
    return ans;
    }
};