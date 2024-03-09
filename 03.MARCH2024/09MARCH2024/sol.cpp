class Solution
{
public:
    char nthCharacter(string s, int r, int n)
    {
        // code here

        int size = s.size();
        while (r--)
        {
            string temp = "";
            for (int i = 0; i < size; i++)
            {
                if (s[i] == '0')
                {
                    temp += "01";
                }
                else
                {
                    temp += "10";
                }

                if (temp.size() > n)
                {
                    break;
                }
            }
            s = temp;
        }

        return s[n];
    }
};