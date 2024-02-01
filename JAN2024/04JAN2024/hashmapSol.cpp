class Solution
{
public:
    int singleElement(int arr[], int n)
    {
        // code here
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
            if (m[arr[i]] == 3)
            {
                m.erase(arr[i]);
            }
        }

        int temp;
        for (auto i : m)
        {
            temp = i.first;
        }
        return temp;
    }
};