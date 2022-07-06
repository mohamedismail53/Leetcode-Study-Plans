class NumArray {
private:
    vector<int> _nums = {};    
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        _nums.resize(n+1);
        _nums[0] = 0;
        for(int i = 1; i <= n; ++i) 
            _nums[i] = _nums[i-1] + nums[i-1];
    }
    
    int sumRange(int left, int right) {
        return _nums[right+1] - _nums[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */