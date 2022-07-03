class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size();
        string ret = "";
        int i =  0;
        while(i < n) {
            if(i+2<n&&s[i+2]=='#') {
                ret += (((s[i]-'0')*10+(s[i+1]-'1'))+'a');
                i+=3;
            }
            else {
                ret += (s[i]-'1'+'a');
                ++i;
            }
        }
        return ret;
    }
};