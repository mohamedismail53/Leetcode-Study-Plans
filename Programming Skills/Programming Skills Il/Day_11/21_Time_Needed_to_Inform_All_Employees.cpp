class Solution {
public:
    void DFS(vector<int>& manager, vector<int>& informTime, vector<int>& times, int id) {
        if (times[id] != -1)    return;
        if (manager[id] == -1) {            
            times[id] = informTime[id];
            return;
        } 
        DFS(manager, informTime, times, manager[id]);
        times[id] = informTime[id]+times[manager[id]];
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        if(n <= 1)  return 0;
        vector<int> times(n, -1);
        int ret = 0;
        for(int i = 0; i < n; ++i) {
            if(times[i]==-1) 
                DFS(manager, informTime, times, i);
            ret = max(ret, times[i]);
        }
        return ret;
    }
};