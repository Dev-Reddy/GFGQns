//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    /*You are required to complete this method */
    int atoi(string s)
    {
        // Your code here
        int ans = 0;
        int mul = 1;

        if (s[0] == '-')
        {
            for (int i = s.size() - 1; i > 0; i--)
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    int temp = s[i] - '0';
                    ans += (temp * mul);
                    mul *= 10;
                }
                else
                {
                    return -1;
                }
            }
            return ans * -1;
        }
        else
        {
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    int temp = s[i] - '0';
                    ans += (temp * mul);
                    mul *= 10;
                }
                else
                {
                    return -1;
                }
            }
            return ans;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.atoi(s) << endl;
    }
}
// } Driver Code Ends