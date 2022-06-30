class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        int maxWealth  = INT_MIN;
        for(int i = 0; i < n; ++i) {
            int sumOfWealth  = 0;
            for(int j = 0; j < m; ++j)
                sumOfWealth += accounts[i][j];
            maxWealth = max(maxWealth, sumOfWealth);
        }
        return maxWealth;
    }
};