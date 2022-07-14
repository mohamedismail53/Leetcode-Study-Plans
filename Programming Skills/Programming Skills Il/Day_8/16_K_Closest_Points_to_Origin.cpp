class Solution {
public:
    double euclideanDist(int x1, int y1) {
        return sqrt(pow(x1, 2) + pow(y1, 2));
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<vector<int>> ret(k);
        vector<pair<double, vector<int>>> v(n);
        for(int i = 0; i < n; ++i) {
            double dist = euclideanDist(points[i][0], points[i][1]);
            v[i] = {dist, points[i]};
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < k; ++i)
            ret[i] = v[i].second;
        return ret;
    }
};