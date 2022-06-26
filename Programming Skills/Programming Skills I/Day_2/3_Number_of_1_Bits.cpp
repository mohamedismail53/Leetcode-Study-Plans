class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret = 0;
        while(n) {
            if(n&1) {
                ++ret;
            }
            n/=2;
        }
        return ret;
    }
};