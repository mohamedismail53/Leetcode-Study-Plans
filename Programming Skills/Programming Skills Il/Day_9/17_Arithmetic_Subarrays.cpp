class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size();
        int q = l.size();
        vector<bool> ret(q);
        int idx = 0;
        while(q--) {
            int sz = r[idx]-l[idx]+1;
            vector<int> v(sz);
            for(int i = l[idx], j = 0; i <= r[idx]; ++i, ++j)
                v[j] = nums[i];
            sort(v.begin(), v.end(), greater<int>());
            int diff = v[0]-v[1];
            bool flag = 1;
            for(int i = 1; i < sz-1; ++i) {
                if(v[i]-v[i+1]!=diff) {
                    flag = 0;
                    break;
                }
            }
            ret[idx++] = flag;
        }
        return ret;
    }
};