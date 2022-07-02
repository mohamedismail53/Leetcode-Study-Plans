class Solution {
public:
    char findTheDifference(string s, string t) {
        // Approach 1
        /* int n = s.size();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i = 0; i < n; ++i) 
            if(s[i]!=t[i])
                return t[i];
        return t[n]; */

        // Approach 2
        
        /* int n = s.size();
        int frq_s[26] = {};
        int frq_t[26] = {};
        for(int i = 0; i < n; ++i) {
            frq_s[s[i]-'a']++;
            frq_t[t[i]-'a']++;
        }
        frq_t[t[n]-'a']++;
        for(int i = 0; i < 26; ++i)
            if(frq_s[i]!=frq_t[i])
                return (char)('a'+i);
        return 'a'; */

        // Approach 3
        s += t;
        int ans = 0;
        for(auto x : s)
            ans ^= x;
        return (char)ans;
    }
};