class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> arr;

        for(int i=0;i<nums1.size();i++){
            arr.push_back(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            arr.push_back(nums2[j]);
        }
        sort(arr.begin(),arr.end());
        int mid=INT_MIN;
        float median=0;
        if (arr.size() %2==0 ){
            mid= arr.size() /2;
            median=(arr[mid-1]+arr[mid])/2.0;
            return median;
        }
        else{
            mid=arr.size()/2;
            median=arr[mid];
            return median;
        }
    return -1;
        
    }
};