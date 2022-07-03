class Solution {
public:
    string toLowerCase(string s) {
        // Approach 1
        /* transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s; */
        // Approach 2
        int n = s.size();
        for(int i = 0; i < n; ++i) {
            if(s[i]>='A'&&s[i]<='Z')
                s[i]+=('a'-'A');
        }
        return s;
    }
};