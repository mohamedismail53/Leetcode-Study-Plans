class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if(n==2)
            return true;
        double lsSlope, previousSlope;
        for(int i = 1; i < n; ++i) {
            int xDiff = (coordinates[i][0]-coordinates[i-1][0]);
            int yDiff = (coordinates[i][1]-coordinates[i-1][1]);
            if(xDiff==0)
                lsSlope = INT_MAX;
            else if(yDiff==0)
                lsSlope = 0;
            else
                lsSlope = 1.0*yDiff/xDiff;
            if(i==1)
                previousSlope = lsSlope;
            if(i!=1&&lsSlope!=previousSlope)
                return false;
        }
        return true;
    }
};