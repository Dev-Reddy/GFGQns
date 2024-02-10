//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int dfs(vector<vector<int>> &arr, int n, int i, int j, int k, vector<vector<vector<int>>> &mp)
    {
        if (k <= 0)
            return 0;

        if (i >= n || j >= n)
            return 0;

        if (i == n - 1 && j == n - 1)
        {

            if (k == arr[i][j])
            {
                return 1;
            }
            return 0;
        }
        if (mp[i][j][k] != -1)
            return mp[i][j][k];

        mp[i][j][k] = dfs(arr, n, i + 1, j, k - arr[i][j], mp) + dfs(arr, n, i, j + 1, k - arr[i][j], mp);
        return mp[i][j][k];
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &arr)
    {

        vector<vector<vector<int>>> mp(n, (vector<vector<int>>(n, (vector<int>(k + 1, -1)))));
        return dfs(arr, n, 0, 0, k, mp);
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i, j, k, l, m, n, t;
    cin >> t;
    while (t--)
    {
        cin >> k >> n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends