class Solution
{
public:
    int max_courses(int n, int total, vector<int> &cost)
    {
        // Code Here
        vector<int> dp(total + 1, 0);

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = total; j >= 0; j--)
            {
                if (cost[i] <= j)
                {
                    int rem = j - (cost[i] * 0.1);
                    dp[j] = max(dp[j], 1 + dp[rem]);
                }
            }
        }

        return dp[total];
    }
};