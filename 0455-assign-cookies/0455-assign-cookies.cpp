class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        int n=g.size();
        int m=s.size();
        int l=0;
        int r=0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        while(r<n && l<m){
            if(g[r]<=s[l]){
                r+=1;
            }
            l+=1;
        }
    return r;
        
    }
};