class Solution {
public:
    int lengthOfLastWord(string s) {
        int ret = 0;
        int n = s.size()-1;
        while(s[n] == ' ')  --n;
        for(int i = n; i>=0; --i) {
            if(s[i]==' ')   break;
            ++ret;
        }
        return ret;
    }
};