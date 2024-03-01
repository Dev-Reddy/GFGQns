//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
};

// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

typedef pair<double, int> pi;
class Solution
{
public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pi> v;
        for (int i = 0; i < n; i++)
        {
            int val = arr[i].value;
            int wei = arr[i].weight;

            // profte/weight
            double pro = ((double)val) / wei;
            v.push_back({pro, i});
        }

        sort(v.begin(), v.end(), greater<pi>());
        double ans = 0.0;
        for (auto it : v)
        {
            int i = it.second;
            int val = arr[i].value;
            int wei = arr[i].weight;

            if (wei <= W)
            {
                ans += val;
                W -= wei;
            }
            else
            {
                double last = ((double)W / wei) * val;
                ans += last;
                W = 0;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(6) << fixed;
    while (t--)
    {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

