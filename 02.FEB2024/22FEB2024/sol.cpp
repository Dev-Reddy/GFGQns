int mod = 1e9 + 7;
class Solution
{
public:
    int subsequenceCount(string s, string t)
    {
        int n = s.length();
        int m = t.length();
        vector<int> next(m + 1, 0);
        next[m] = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            vector<int> curr(m + 1, 0);
            curr[m] = 1;
            for (int j = 0; j < m; j++)
            {
                int a, b;
                a = b = 0;

                a = next[j];

                if (s[i] == t[j])
                    b = next[j + 1];

                curr[j] = (a + b) % mod;
            }
            next = curr;
        }

        return next[0];
    }
};