class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // Approach 1
        /*
        int n = s.size();
        for(int i = 1; i <= n/2; ++i) {
            if(n%i)
                continue;
            vector<int> frq;
            int cnt = 0;
            int val = 0;
            int secret = 1;
            for(int j = 0; j < n; ++j) {
                val += (s[j]-'a')*secret;
                ++cnt;
                ++secret;
                if(cnt==i) {
                    frq.push_back(val);
                    cnt = 0;
                    val = 0;
                    secret = 1;
                }
            }
            int rep = count(frq.begin(), frq.end(), frq.front());
            if(rep==n/i) 
                return 1;
        }
        return 0;
        */
       
        // Approach 2
        int n = s.size();
        for(int i = 1; i <= n/2; ++i) {
            if(n%i==0) {
                string t = s.substr(0, i);
                string tComp = t;
                for(int j = 1; j < n/i; ++j)
                    tComp+=t;
                if(s==tComp)
                    return 1;
            }
        }
        return 0;
    }
};