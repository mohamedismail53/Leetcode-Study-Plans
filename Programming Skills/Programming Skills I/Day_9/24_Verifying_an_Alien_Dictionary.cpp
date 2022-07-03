class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> ord;
        for(int i = 0; i <= order.size(); ++i)
            ord[order[i]] = i+1;
        int n = words.size();
        int lstOccur = -1;
        for(int i = 1; i < n; ++i) {
            for(int j = 0; j < min(words[i].size(), words[i-1].size()); ++j) {
                int idx1 = ord[words[i-1][j]];
                int idx2 = ord[words[i][j]];
                if(idx1>idx2)
                    return false;
                else if(idx1==idx2) 
                    continue;
                else
                    break;
            }
            if(words[i].size()<words[i-1].size()) {
                string word = words[i-1].substr(0, words[i].size());
                if(word==words[i])
                    return false;
            }
        }
        return true;
    }
};