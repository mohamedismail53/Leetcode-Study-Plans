class Solution {
public:
    int nextGreaterElement(int n) {
        // Approach 1
        /*
        if(n<=11)   return -1;
        vector<int> num;
        int tmp = n;
        while(tmp) {
            num.push_back(tmp%10);
            tmp/=10;
        }
        sort(num.begin(), num.end());
        long long ans = INT_MAX + 1LL;
        int sz = num.size();
        do {
            long long val = 0;
            for(int i = 0; i < sz; ++i)
                val = val * 10 + num[i];
            if(val<=INT_MAX&&val>n)
                ans = min(ans, val);
        } while(next_permutation(num.begin(), num.end()));
        if(ans==INT_MAX+1LL)  return -1;
        return ans;
        */
        // Approach 2
        /*
        string s = to_string(n);
        if(!next_permutation(s.begin(), s.end()))
            return -1;
        long ret = stol(s);
        if(ret>INT_MAX) 
            return -1;
        return ret;
        */
        // Approach 3
        if(n<12)
            return -1;
        string s = to_string(n);
        int i = s.size()-2;
        while(i >= 0 && s[i] >= s[i+1])
            --i;
        if(i==-1)
            return -1;
        int j = s.size()-1;
        while(j >= 0 && s[j] <= s[i])
            --j;
        swap(s[i], s[j]);
        reverse(s.begin()+i+1, s.end());
        long ret = stol(s);
        if(ret > INT_MAX)
            return -1;
        return ret;
    }
};