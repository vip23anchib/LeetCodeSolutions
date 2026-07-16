class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> arr;

        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if (nums1[i]<nums2[j]){
                arr.push_back(nums1[i]);
                i++;
            }
            else {
                arr.push_back(nums2[j]);
                j++;
            }
        }
        while(i < nums1.size()){
            arr.push_back(nums1[i]);
            i++;
        }

        while(j < nums2.size()){
            arr.push_back(nums2[j]);
            j++;
        }

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