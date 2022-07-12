class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<pair<int, int>> st;
        for(int i = 0; i < n; ++i) {
            int curTemp = temperatures[i];
            while(!st.empty() && curTemp > st.top().first) {
                int prevDay = st.top().second;
                st.pop();
                ans[prevDay] = i - prevDay;
            }
            st.push({curTemp, i});
        }
        return ans;
    }
};