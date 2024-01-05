
#define ll long long
class Solution
{
public:
    int TotalWays(int N)
    {
        // Code here
        const int mod = 1000000007;
        int prev = 1, curr = 1;

        for (int i = 0; i < N; ++i)
        {
            int temp = curr;
            curr = (prev + curr) % mod;
            prev = temp;
        }

        return (1ll * curr * curr) % mod;
    }
};