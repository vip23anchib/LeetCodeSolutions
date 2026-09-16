class Solution {
public:
    int removePalindromeSub(string s) {
     int count=0;
    int i=0;
    int n=s.size();
    int j=n-1;
    while(i<j){
        if(s[i]!=s[j]){
            return 2;
        }
        i++;
        j--;
    }   
    return 1;
    }
};