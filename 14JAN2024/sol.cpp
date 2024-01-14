class Solution
{
public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int m, int n)
    {
        // Your code here
        unordered_set<string> set;

        vector<int> ans;

        for (int i = 0; i < m; i++)
        {
            string temp = "";
            for (int j = 0; j < n; j++)
            {
                temp += matrix[i][j];
            }

            if (set.find(temp) == set.end())
            {
                set.insert(temp);
            }
            else
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};