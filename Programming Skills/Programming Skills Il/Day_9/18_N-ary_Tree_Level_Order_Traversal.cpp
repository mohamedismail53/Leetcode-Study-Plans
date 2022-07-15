/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    vector<vector<int>> levelOrder(Node* root) {
        // Approach 1
        /*
        if(!root)
            return {};
        vector<vector<int>> ret;
        ret.push_back({root->val});
        vector<vector<Node*>> traverse;
        traverse.push_back({root});
        int i = 0;
        while(i < traverse.size()) {
            vector<int> tmp1;
            vector<Node*> tmp2;
            for(auto node:traverse[i]) {
                for(auto ch:node->children) {
                    tmp1.push_back(ch->val);
                    tmp2.push_back(ch);
                }
            }
            ++i;
            if(tmp1.size()==0)  continue;
            ret.push_back(tmp1);
            traverse.push_back(tmp2);
        }
        return ret;
        */
        // Approach 2
        vector<vector<int>> ret;
        if(!root)   return ret;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            int sz = q.size();
            vector<int> tmpAns;
            while(sz--) {
                auto node = q.front();
                q.pop();
                tmpAns.push_back(node->val);
                for(auto ch:node->children) 
                    q.push(ch);
            }
            ret.push_back(tmpAns);
        }
        return ret;
    }
};