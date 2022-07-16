class Solution {
public:
    int nextGreaterElement(int n) {
        // Approach 1
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
    }
};