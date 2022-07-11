class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")    return "0";
        int n1 = num1.size();
        int n2 = num2.size();
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        vector<int> v(n1+n2, 0);
        for(int i = 0; i < n1; ++i) {
            for(int j = 0; j < n2; ++j) {
                int digit = (int)(num1[i]-'0') * (int)(num2[j]-'0');
                v[i+j] += digit;
                v[i+j+1] += v[i+j]/10;
                v[i+j] %= 10;
            }
        }
        string ret = "";
        int start = n1+n2-1;
        while(start>=0&&!v[start])
            start--;
        for(int i = start; i>=0; --i)
            ret += (char)(v[i]+'0');
        return ret;
    }
};