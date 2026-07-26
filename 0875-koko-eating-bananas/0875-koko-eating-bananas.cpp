class Solution {
public:
    long long calculateHours(vector<int> piles, int mid){
            long long totalHrs=0;
            int n=piles.size();
            for(int i=0;i<n;i++){
                totalHrs+=ceil((double)piles[i]/mid);
            }
            return totalHrs;
        }

    int minEatingSpeed(vector<int>& piles, int h) {
        int max_speed=*max_element(piles.begin(),piles.end());
        int low=1;
        int high=max_speed;
        int ans=INT_MAX;

        while(low<=high){
            int mid=(low+high)/2;
            long long totalHrs=calculateHours(piles,mid);

            if(totalHrs<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }

    return low;
        
    }
};