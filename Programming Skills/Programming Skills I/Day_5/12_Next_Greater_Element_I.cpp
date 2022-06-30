class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(!n1)
            return ret;
        if(n1&&!n2){
            for(int i = 0; i < n1; ++i)
                ret.push_back(-1);
            return ret;
        }
        for(int i = 0; i < n1; ++i) {
            int findIdx = find(nums2.begin(), nums2.end(), nums1[i])-nums2.begin();
            bool found = 0;
            for(int j = findIdx+1; j < n2; ++j) {
                if(nums2[j]>nums2[findIdx]) {
                    ret.push_back(nums2[j]);
                    found = 1;
                    break;
                }
            }
            if(!found)
                ret.push_back(-1);
        }
        return ret;
    }
};