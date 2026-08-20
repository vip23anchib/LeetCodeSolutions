class Solution {
public:

    long long sumOfMins(vector<int>& nums) {

        int n = nums.size();

        vector<int> nse(n);    
        vector<int> psee(n);    

        stack<int> st;


        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }

            nse[i] = st.empty() ? n : st.top();

            st.push(i);
        }

        while (!st.empty()) {
            st.pop();
        }



        for (int i = 0; i < n; i++) {

            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }

            psee[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }


        long long total = 0;

        for (int i = 0; i < n; i++) {

            long long left = i - psee[i];
            long long right = nse[i] - i;

            total += (long long) nums[i] * left * right;
        }

        return total;
    }



    long long sumOfMaxs(vector<int>& nums) {

        int n = nums.size();

        vector<int> nge(n);     
        vector<int> pgee(n);   

        stack<int> st;


        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }

            nge[i] = st.empty() ? n : st.top();

            st.push(i);
        }


        while (!st.empty()) {
            st.pop();
        }


        for (int i = 0; i < n; i++) {

            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }

            pgee[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }



        long long total = 0;

        for (int i = 0; i < n; i++) {

            long long left = i - pgee[i];
            long long right = nge[i] - i;

            total += (long long) nums[i] * left * right;
        }

        return total;
    }


    long long subArrayRanges(vector<int>& nums) {

        long long maximumSum = sumOfMaxs(nums);
        long long minimumSum = sumOfMins(nums);

        return maximumSum - minimumSum;
    }
};