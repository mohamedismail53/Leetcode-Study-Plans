class Solution {
public:
    double average(vector<int>& salary) {
        /* 
        --------------- Solution 1 ------------------------- 
        int n = salary.size();
        int sum = accumulate(salary.begin(), salary.end(), 0);
        int mx = *max_element(salary.begin(), salary.end());
        int mn = *min_element(salary.begin(), salary.end());
        return 1.0*(sum-mx-mn)/(n-2);
        
        ----------------- Solution 2 ----------------------- 
        int n = salary.size();
        sort(salary.begin(), salary.end());
        int sum = accumulate(salary.begin(), salary.end(), 0);
        return 1.0*(sum-salary[0]-salary[n-1])/(n-2);
        */
       // Best Solution
        int n = salary.size();
        int sum = 0, mx = 0, mn = INT_MAX;
        for(int i = 0; i < n; ++i) {
            sum += salary[i];
            mx = max(mx, salary[i]);
            mn = min(mn, salary[i]);
        }
        return 1.0*(sum-mx-mn)/(n-2);
    }
};