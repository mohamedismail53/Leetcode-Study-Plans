class Solution {
public:
    string addBinary(string a, string b) {
        int n1 = a.size();
        int n2 = b.size();
        int mx = max(n1, n2);
        a = string(mx-n1, '0') + a;
        b = string(mx-n2, '0') + b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int carry = 0;
        string ret = "";
        for(int i = 0; i < mx; ++i) {
            int num1 = a[i]-'0';
            int num2 = b[i]-'0';
            int sum = num1 + num2 + carry;
            if(sum == 2) {
                carry = 1;
                ret += "0";
            }
            else if(sum == 3) {
                carry = 1; 
                ret += "1";
            }
            else {
                carry = 0;
                ret += (char)(sum+'0');
            }
        }
        if(carry)   ret += "1";
        reverse(ret.begin(), ret.end());
        return ret;
    }
};