class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;
        while(n--) {
            int sum = digits[n] + carry;
            if(sum==10) {
                carry = 1;
                digits[n] = 0;
            }
            else {
                carry = 0;
                digits[n] = sum;
            }
        }
        if(carry)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};