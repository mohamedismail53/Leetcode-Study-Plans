class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n = points.size();
        int idx = -1;
        int mnManhattanDist = INT_MAX;
        for(int i = 0; i < n; ++i) {
            int x1 = points[i][0];
            int y1 = points[i][1];
            if(x1==x||y1==y) {
                int dist = abs(x-x1) + abs(y-y1);
                if(dist<mnManhattanDist) {
                    idx = i;
                    mnManhattanDist = dist;
                }
            }
        }
        return idx;
    }
};