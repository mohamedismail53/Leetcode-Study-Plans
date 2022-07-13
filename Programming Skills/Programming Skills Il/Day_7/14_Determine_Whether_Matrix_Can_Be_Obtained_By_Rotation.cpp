class Solution {
public:
    void transpose(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i = 0; i < n; ++i)
            for(int j = i+1; j < n; ++j)
                swap(mat[i][j], mat[j][i]);
    }
    
    void reflect(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n/2; ++j)
                swap(mat[i][j], mat[i][n-j-1]);
    }
    
    void rotate(vector<vector<int>>& mat) {
        transpose(mat);
        reflect(mat);
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for(int k = 0; k < 4; ++k) {
            bool f = 1;
            for(int i = 0; i < n; ++i) {
                for(int j = 0; j < n; ++j) {
                    if(mat[i][j]!=target[j][n-i-1]) {
                        f = 0;
                        break;
                    }
                }
                if(!f)  break;
            }
            if(f)   return true;
            rotate(mat);
        }
        return false;
    }
};