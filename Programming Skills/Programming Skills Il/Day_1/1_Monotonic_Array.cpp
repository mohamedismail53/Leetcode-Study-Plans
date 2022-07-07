class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // Approach 1
        /*
        if(is_sorted(nums.begin(), nums.end())||is_sorted(nums.begin(), nums.end(), greater<int>()))
            return true;
        return false;
        */
        
        // Approach 2
        /*
        if(nums.size()==1)
            return 1;
        int cntEqual = 0;
        int cntIncrease = 0;
        int cntDecrease = 0;
        for(int i = 1; i < nums.size(); ++i){ 
            if(nums[i]==nums[i-1])
                ++cntEqual;
            else if(nums[i]-nums[i-1]>0)
                ++cntIncrease;
            else if(nums[i]-nums[i-1]<0)
                ++cntDecrease;
        }
        if(nums.size()-cntEqual-1==cntIncrease || nums.size()-cntEqual-1==cntDecrease)
            return 1;
        return 0;
        */
        
        // Approach 3
        if(nums.size()==1)
            return 1;
        int i = 1;
        while(i < nums.size() && nums[i]==nums[i-1])   ++i;
        if(i==nums.size())
            return 1;
        bool isIncreasing = nums[i] - nums[i-1] > 0;
        for(int l = i+1; l < nums.size() && isIncreasing; ++l)
            if(nums[l]-nums[l-1]<0)
                return 0;
        for(int l = i+1; l < nums.size() && !isIncreasing; ++l)
            if(nums[l]-nums[l-1]>0)
                return 0;
        return 1;
    }
};