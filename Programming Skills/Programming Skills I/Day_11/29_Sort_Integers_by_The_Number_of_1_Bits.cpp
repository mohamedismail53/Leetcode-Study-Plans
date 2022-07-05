class Solution {
public:
    int countOnes(int n) {
        int cnt = 0;
        while(n) {
            n &= (n-1);
            ++cnt;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int, int>> ret;
        for(int i = 0; i < n; ++i) {
            ret.push_back({countOnes(arr[i]), arr[i]});
        }
        sort(ret.begin(), ret.end());
        for(int i = 0; i < n; ++i)
            arr[i] = ret[i].second;
        return arr;
    }
};