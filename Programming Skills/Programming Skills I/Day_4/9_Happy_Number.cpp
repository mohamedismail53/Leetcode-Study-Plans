class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(n) {
            if(n==1) {
                return 1;
            }
            if(st.find(n)!=st.end()) {
                return 0;
            }
            st.insert(n);
            int tmp = 0;
            while(n) {
                int rem = n%10;
                tmp += (rem * rem);
                n /= 10;
            }
            n = tmp;
        }
        return 1;
    }
};