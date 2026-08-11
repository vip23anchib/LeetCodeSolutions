class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long count = 1;
        long long current = 1;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] != nums[i - 1]) {
                current++;
            } 
            else {
                current = 1;
            }

            count += current;
        }

        return count;
    }
};