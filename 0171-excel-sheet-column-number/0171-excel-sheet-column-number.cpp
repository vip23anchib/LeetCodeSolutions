class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        long long result = 0; 
        
        for(int i = 0; i < n; i++){
            int alpha = columnTitle[i] - 'A' + 1;
            result = result * 26 + alpha; 
        }
        
        return result;
    }
};
