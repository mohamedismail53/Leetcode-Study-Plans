class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ret(n, -1);
        stack<pair<int, int>> st;
        for(int j = 0; j < 2; ++j) {
            for(int i = 0; i < n; ++i) {
                while(!st.empty()&&nums[i]>st.top().first) {
                    ret[st.top().second] = nums[i];
                    st.pop();
                }
                st.push({nums[i], i});
            }
        }
        return ret;
    }
};