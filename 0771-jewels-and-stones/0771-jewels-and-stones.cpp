class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int total=0;
        unordered_map<char, int> count;
        for(int i=0;i<stones.length();i++){
            count[stones[i]]++;
        }
        for(int j=0;j<jewels.length();j++){
            total+=count[jewels[j]];
            
        }
    return total;  
    }
};