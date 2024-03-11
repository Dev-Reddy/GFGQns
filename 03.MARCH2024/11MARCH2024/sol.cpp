class Solution
{
public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
    {
        // set to store elements of matrix1
        unordered_set<int> s;

        // populating the set with elements of matrix1
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                s.insert(mat1[i][j]);
            }
        }

        int count = 0;

        // traverse matrix 2 and check if (x-b) exists in the set i.e. in matrix1
        // If it does, then we will increment the count by 1.

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (s.find(x - mat2[i][j]) != s.end())
                    count++;
            }
        }

        return count;
    }
};