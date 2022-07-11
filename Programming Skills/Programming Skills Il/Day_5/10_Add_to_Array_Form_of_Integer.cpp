class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n1 = num.size();
        reverse(num.begin(), num.end());
        int carry = 0;
        for(int i = 0; i < n1; ++i) {
            int num1 = num[i];
            int num2 = k%10;
            k/=10;
            int sum = num1 + num2 + carry;
            if(sum>=10) {
                num[i] = sum % 10;
                carry = sum / 10;
            }
            else {
                carry = 0;
                num[i] = sum;
            }
        }
        k+=carry;
        while(k) {
            num.push_back(k%10);
            k/=10;
        }
        reverse(num.begin(), num.end());
        return num;
    }
};