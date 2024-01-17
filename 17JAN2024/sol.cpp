class Solution
{
public:
    void helper(vector<int> &A, int curr, int n, set<vector<int>> &s)
    {
        if (curr >= n)
        {
            s.insert(A);
            return;
        }
        for (int i = curr; i < n; i++)
        {
            swap(A[curr], A[i]);       // swap
            helper(A, curr + 1, n, s); // deal with it
            swap(A[curr], A[i]);       // return back to previous state
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &A, int n)
    {
        // code here
        set<vector<int>> s;
        vector<vector<int>> res;
        helper(A, 0, n, s);
        for (auto itr : s)
        {
            res.push_back(itr);
        }
        return res;
    }
};