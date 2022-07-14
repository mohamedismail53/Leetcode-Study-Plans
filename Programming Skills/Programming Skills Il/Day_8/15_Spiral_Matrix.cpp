class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ret;
        int idx = 0;
        for(int i = 0, c1 = 0, c2 = n-1, r1 = 0, r2 = m-1; i < m/2; ++i) {
            
            for(int j = c1; j <= c2 && idx != m*n; ++j, ++idx)
                ret.push_back(matrix[i][j]);
            
            for(int j = r1+1; j <= r2 && idx != m*n; ++j, ++idx)
                ret.push_back(matrix[j][c2]);
            
            for(int j = c2-1; j >= c1 && idx != m*n; --j, ++idx)
                ret.push_back(matrix[m-i-1][j]);
            
            for(int j = r2-1; j > r1 && idx != m*n; --j, ++idx)
                ret.push_back(matrix[j][c1]);
            
            c1++, c2--;
            r1++, r2--;
        }
        if(m&1)
            for(int i = m/2; i < n-m/2; ++i)
                ret.push_back(matrix[m/2][i]);
        return ret;
    }
};