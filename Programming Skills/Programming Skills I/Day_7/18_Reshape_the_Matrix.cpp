class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n!=r*c)
            return mat;
        vector<vector<int>> ret(r, vector<int>(c));
        for(int i = 0, rIdx = 0, cIdx = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                if(cIdx==c)
                    cIdx = 0, ++rIdx;
                ret[rIdx][cIdx] = mat[i][j];
                ++cIdx;
            }
        }
        return ret;
    }
};