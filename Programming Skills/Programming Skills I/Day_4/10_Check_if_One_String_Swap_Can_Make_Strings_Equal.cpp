class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size() != s2.size()) {
            return 0;
        }
        if(s1 == s2) {
            return 1;
        }
        int cntDiff = 0;
        int DiffAtPos1 = -1;
        int DiffAtPos2 = -1;
        for(int i = 0; i < s1.size(); ++i) {
            if(s1[i]!=s2[i]) {
                cntDiff++;
                if(DiffAtPos1==-1) {
                    DiffAtPos1 = i;
                }
                else if(DiffAtPos2==-1) {
                    DiffAtPos2 = i;
                }
            }
        }
        if(cntDiff!=2) {
            return 0;
        }
        swap(s1[DiffAtPos1], s1[DiffAtPos2]);
        return s1==s2;
    }
};