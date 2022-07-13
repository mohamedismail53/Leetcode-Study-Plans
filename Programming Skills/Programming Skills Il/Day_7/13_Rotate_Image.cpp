class Solution {
public:
    void transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; ++i)
            for(int j = i+1; j <  n; ++j)
                swap(matrix[i][j], matrix[j][i]);
    }
    
    void reflect(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; ++i)
            for(int j = 0; j <  n/2; ++j)
                swap(matrix[i][j], matrix[i][n-j-1]);
    }
    
    void rotate(vector<vector<int>>& matrix) {
        // Approach 1 With extra memory
        /*
        int n = matrix.size();
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                v[j][n-i-1] = matrix[i][j];
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                matrix[i][j] = v[i][j];
        */
        
        // Approach 2 with no extra space
        transpose(matrix);
        reflect(matrix);
    }
};