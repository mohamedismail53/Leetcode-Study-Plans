class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m)    
            return false;
        int frq1[26] = {};
        int frq2[26] = {};
        for(int i = 0; i < n; ++i) {
            frq1[s[i]-'a']++;
            frq2[t[i]-'a']++;
        }
        for(int i = 0; i < 26; ++i)
            if(frq1[i]!=frq2[i])
                return false;
        return true;
    }
};