class Solution
{
public:
    int maxSum(int n)
    {
        // code here.
        vector<int> pre(n + 1, 0);
        for (int i = 0; i <= n; i++)
        {
            int sum = pre[i / 2] + pre[i / 3] + pre[i / 4];
            if (sum >= i)
                pre[i] = sum;
            else
                pre[i] = i;
        }
        return pre[n];
    }
};