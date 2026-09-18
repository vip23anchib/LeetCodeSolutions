class Solution {
public:

    vector<string> maxNumOfSubstrings(string s) {

        int n = s.size();

        vector<int> first(26, n);
        vector<int> last(26, -1);

        for(int i = 0; i < n; i++) {
            int c = s[i] - 'a';

            first[c] = min(first[c], i);
            last[c] = i;
        }

        vector<pair<int, int>> intervals;

        for(int c = 0; c < 26; c++) {

            if(last[c] == -1)
                continue;

            int start = first[c];
            int end = last[c];

            bool valid = true;

            for(int i = start; i <= end; i++) {

                int curr = s[i] - 'a';

                if(first[curr] < start) {
                    valid = false;
                    break;
                }

                end = max(end, last[curr]);
            }

            if(valid) {
                intervals.push_back({start, end});
            }
        }

        sort(intervals.begin(), intervals.end(),
            [](pair<int,int>& a, pair<int,int>& b) {
                return a.second < b.second;
            });


        vector<string> ans;

        int lastEnd = -1;

        for(auto &interval : intervals) {

            int start = interval.first;
            int end = interval.second;

            if(start > lastEnd) {

                ans.push_back(s.substr(start, end - start + 1));

                lastEnd = end;
            }
        }

        return ans;
    }
};