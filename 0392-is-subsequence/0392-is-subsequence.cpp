/*
class Solution {
public:
    bool isSubsequence(string s, string t) {

        int m=s.length()-1;
        int n=t.length()-1;

        vector<int> freq(m,1);
        int l1=0, l2=0;
        int r1=m;
        int r2=n;
        while(l1<r1 && l2<r2){
            if (s[l1]==t[l2]){
                freq[l1]=0;
                l1++;
                l2++;
            }
            else {
                l2++;
            }
            for ( int x: freq){
                if (x==0){
                    return false;
                }
            }
            return true;
        }
    return false;
    }
};
*/





class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0; 
        int j = 0;

        while (i < s.length() && j < t.length()) {

            if (s[i] == t[j]) {
                i++;
                j++;
            } else {
                j++;
            }
        }

        return i == s.length();
    }
};