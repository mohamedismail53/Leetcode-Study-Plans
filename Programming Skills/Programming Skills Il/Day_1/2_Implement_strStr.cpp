class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if(haystack==needle)
            return 0;
        if(m>n||(n==m&&haystack!=needle))
            return -1;
        for(int i = 0; i+m-1 < n; ++i) {
            if(haystack[i]==needle[0]) {
                int j = 0;
                while(j < m && haystack[i+j]==needle[j])
                    ++j;
                if(j==m&&needle[j-1]==haystack[i+j-1])
                    return i;
            }
        }
        return -1;
    }
};