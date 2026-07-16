class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m=nums1.size();
        int n=nums2.size();

        int total=m+n;

        int mid1=(total-1)/2;
        int mid2=total/2;

        int i=0,j=0;

        int count=-1;

        int first=0;
        int second=0;

        while(i<m && j<n)
        {
            int curr;

            if(nums1[i]<=nums2[j])
            {
                curr=nums1[i];
                i++;
            }
            else
            {
                curr=nums2[j];
                j++;
            }

            count++;

            if(count==mid1) first=curr;
            if(count==mid2) second=curr;
        }

        while(i<m)
        {
            count++;

            if(count==mid1) first=nums1[i];
            if(count==mid2) second=nums1[i];

            i++;
        }

        while(j<n)
        {
            count++;

            if(count==mid1) first=nums2[j];
            if(count==mid2) second=nums2[j];

            j++;
        }

        return (first+second)/2.0;
    }
};