class Solution
{
public:
    int DivisibleByEight(string s)
    {
        // code here
        int n;
        if (s.size() <= 3)
        {
            n = stoi(s);
        }
        else
        {
            n = stoi(s.substr(s.size() - 3, 3));
        }

        if (n % 8 == 0)
        {
            return 1;
        }

        return -1;
    }
};