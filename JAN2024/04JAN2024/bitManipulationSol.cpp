//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int singleElement(int arr[], int n)
    {
        // code here

        int ans = 0;

        for (int i = 0; i < 32; i++)
        {
            int currentBit = 1 << i;
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (currentBit & arr[j])
                {
                    count++;
                }
            }
            if (count % 3 == 1)
            {
                ans = ans | currentBit;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;

        cin >> N;
        int arr[N];

        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.singleElement(arr, N);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends