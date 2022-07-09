class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // Approach 1 (Best Memory)
        /* int n = tokens.size();
        int ret;
        if(n==1)
            return stoi(tokens[0]);
        for(int i = 0; i < n; ++i) {
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/") {
                int a, posA;
                int b, posB;
                int cnt = 0;
                int j = i;
                while(j>=0&&cnt<=1) {
                    if(tokens[j]=="+"||tokens[j]=="-"||tokens[j]=="*"||tokens[j]=="/")
                        --j;
                    else if(cnt==0) {
                        b = stoi(tokens[j]);
                        posB = j;
                        ++cnt;
                        --j;
                    }
                    else if(cnt==1) {
                        a = stoi(tokens[j]);
                        posA = j;
                        ++cnt;
                        --j;
                    }    
                }
                int ans;
                if(tokens[i]=="+")
                    ans = a+b;
                else if(tokens[i]=="-")
                    ans = a-b;
                else if(tokens[i]=="*")
                    ans = a*b;
                else if(tokens[i]=="/")
                    ans = a/b;
                tokens[i] = to_string(ans);
                ret = stoi(tokens[i]);
                tokens[posB] = "+";
                tokens[posA] = "+";
                // cout << a << ' ' << b << ' ' << ret << '\n';
            }
        }
        return ret;
        */
        
        // Approach 2
        int n = tokens.size();
        vector<int> v;
        for(int i = 0; i < n; ++i) {
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/") {
                int b = v.back();
                v.pop_back();
                int a = v.back();
                v.pop_back();
                int ans;
                if(tokens[i]=="+")
                    ans = a+b;
                else if(tokens[i]=="-")
                    ans = a-b;
                else if(tokens[i]=="*")
                    ans = a*b;
                else if(tokens[i]=="/")
                    ans = a/b;
                v.push_back(ans);
            }
            else
                v.push_back(stoi(tokens[i]));
        }
        return v.front();
    }
};