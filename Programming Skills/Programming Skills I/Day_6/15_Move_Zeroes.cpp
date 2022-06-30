class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        while(l<n&&r<n){
            if(nums[l]==0){
                while(r<n&&nums[r]==0)    
                    ++r;
                if(r<n&&nums[r]) swap(nums[l], nums[r]);
            }
            l++;
            if(r<l) r = l;
        }
        return;
    }
};