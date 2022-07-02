class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        int mn = min(n1, n2);
        string ret = "";
        for(int i = 0; i < mn; ++i) {
            ret += word1[i];
            ret += word2[i];
        }
        if(n1==mn) 
            for(int i = mn; i < n2; ++i)
                ret += word2[i];
        if(n2==mn) 
            for(int i = mn; i < n1; ++i)
                ret += word1[i];
        return ret;
    }
};