class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;

        for(int i = 0; i < s.length() - 1; i++) {

            int curr = mp[s[i]];
            int next = mp[s[i + 1]];

            if(curr < next)
                ans -= curr;

            else
                ans += curr;
        }

        ans += mp[s.back()];

        return ans;
    }
};