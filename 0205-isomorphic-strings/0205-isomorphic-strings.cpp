class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if (s.size() != t.size())
            return false;

        unordered_map<char, char> sMap;
        unordered_map<char, char> tMap;

        for (int i = 0; i < s.size(); i++) {
            if (!sMap.count(s[i]) && !tMap.count(t[i])) {
                sMap[s[i]] = t[i];
                tMap[t[i]] = s[i];
            }
           
            else {
                if (sMap[s[i]] != t[i] || tMap[t[i]] != s[i])
                    return false;
            }
        }

        return true;
    }
};