class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string goalParser = "";
        for(int i = 0; i < n; ++i) {
            if(command[i]=='G')
                goalParser += 'G';
            else if(command[i]=='(' && command[i+1] ==')')
                goalParser += 'o', ++i;
            else 
                goalParser += "al", i+=3;
        }
        return goalParser;
    }
};