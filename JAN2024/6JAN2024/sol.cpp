class Solution
{
private:
    int sumOfPowersOfPrime(int n)
    { // function which finds out prime factors for any number
        int count = 0;

        while (n % 2 == 0)
        {
            count++;
            n /= 2;
        }

        for (int i = 3; i <= sqrt(n); i++)
        {
            while (n % i == 0)
            {
                count++;
                n /= i;
            }
        }

        if (n > 2)
        {
            count++;
        }

        return count;
    }

public:
    int sumOfPowers(int a, int b)
    {
        // Code here
        int ans = 0;
        for (int i = a; i <= b; i++)
        {
            ans += sumOfPowersOfPrime(i);
        }
        return ans;
    }
};