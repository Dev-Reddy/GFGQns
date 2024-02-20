class Solution
{
public:
    int wordBreak(int n, string s, vector<string> &dictionary)
    {
        // code here
        string a = s;
        if (a == "")
        {
            return 1;
        }
        for (auto it : dictionary)
        {
            if (it == a.substr(0, it.size()))
            {
                a = a.substr(it.size());
                int ans = wordBreak(n, a, dictionary);
                if (ans == 0)
                {
                    a = s;
                }
                else
                {
                    return 1;
                }
            }
        }
        if (a == s)
        {
            return 0;
        }
    }
};