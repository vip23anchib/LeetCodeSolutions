class Solution {
public:

   
    bool possibleOrNot(vector<int>& bloomDay, int day, int m, int k) {

        int cnt = 0;        
        int bouquets = 0;   

        for (int flower : bloomDay) {

            if (flower <= day) {
                cnt++;
            }
            else {
                bouquets += cnt / k;
                cnt = 0;
            }
        }


        bouquets += cnt / k;

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        if ((long long)m * k > n)
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (possibleOrNot(bloomDay, mid, m, k)) {

                high = mid - 1;
            }
            else {

                low = mid + 1;
            }
        }

      
        return low;
    }
};