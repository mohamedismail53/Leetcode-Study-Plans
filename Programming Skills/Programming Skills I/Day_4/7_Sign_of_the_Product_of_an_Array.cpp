class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        bool isNeg = 0;
        for (auto num : nums) {
            if(num == 0)
                return 0;
            else if(num < 0)
                isNeg = !isNeg;
        }
        if(isNeg == 1)
            return -1;
        return 1;
    }
};