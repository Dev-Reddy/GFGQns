class Solution
{
public:
    string removeDuplicates(string str)
    {
        // code here
        set<char> st;
        string result = "";

        for (char ch : str)
        {
            if (st.find(ch) == st.end())
            {
                result += ch;
                st.insert(ch);
            }
        }
        return result;
    }
};