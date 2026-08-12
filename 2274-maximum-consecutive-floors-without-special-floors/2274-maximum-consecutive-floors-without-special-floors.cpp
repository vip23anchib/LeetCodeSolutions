class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {

        sort(special.begin(), special.end());

        int ans = 0;

        ans = max(ans, special[0] - bottom);

        for(int i = 1; i < special.size(); i++) {

            int gap = special[i] - special[i-1] - 1;

            ans = max(ans, gap);
        }
        int n=special.size()-1;
        ans = max(ans, top - special[n]);

        return ans;
    }
};