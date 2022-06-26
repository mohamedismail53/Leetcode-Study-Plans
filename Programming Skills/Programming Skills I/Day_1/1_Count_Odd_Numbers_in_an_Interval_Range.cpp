class Solution {
public:
    int countOdds(int low, int high) {
        int ret = (high-low)/2;
        if((low&1)||(high&1)) 
            ret++;
        return ret;
    }
};