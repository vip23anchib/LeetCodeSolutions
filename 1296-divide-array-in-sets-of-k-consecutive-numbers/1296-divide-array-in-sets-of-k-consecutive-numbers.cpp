class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0){
            return false;
        }
        map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }        
        while(!freq.empty()){
            int start=freq.begin()->first;
            for(int i=0;i<k;i++){
                int card=start+i;
                if(freq.find(card)==freq.end()){
                    return false;
                }
                freq[card]--;
                if(freq[card]==0){
                    freq.erase(card);
                }
            }
        }
        return true;
    }
};