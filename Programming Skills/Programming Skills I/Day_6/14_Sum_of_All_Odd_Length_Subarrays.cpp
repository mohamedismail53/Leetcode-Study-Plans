class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ret = 0;
        int n = arr.size();
        vector<int> frq(n+1, 0);
        for(int i = 0; i < n; ++i)  
            frq[i+1] = frq[i] + arr[i];
        for(int i = 1; i <= n; i+=2) {
            for(int j = i; j <= n; ++j) {
                ret += (frq[j] - frq[j-i]);
            }
        }
        return ret;
    }
};