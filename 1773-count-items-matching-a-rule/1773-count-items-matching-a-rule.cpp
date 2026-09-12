class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=items.size();
        int index;
        if(ruleKey=="type"){
            index=0;
        }
        if(ruleKey=="color"){
            index=1;
        }
        if(ruleKey=="name"){
            index=2;
        }
        int ct=0;
        for(int i=0;i<n;i++){
            if(items[i][index]==ruleValue){
                ct++;
            }
        }
        return ct;
    }
};