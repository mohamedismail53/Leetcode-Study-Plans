class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ret;
        vector<pair<string, int>> tmp(n);
        for(int i = 0; i < n; ++i) {
            tmp[i] = {strs[i], i};
            sort(tmp[i].first.begin(), tmp[i].first.end());
        }
        sort(tmp.begin(), tmp.end());
        for(int i = 0; i < n; ++i) {
            int j = i;
            vector<string> added;
            while(j < n && tmp[i].first==tmp[j].first) {
                added.push_back(strs[tmp[j].second]);
                ++j;
            }
            ret.push_back(added);
            i = j-1;
        }
        return ret;
    }
};