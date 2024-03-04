class Solution
{
public:
    void swapElements(int arr[], int n)
    {

        // Your code here
        if (n <= 2)
        {
            return;
        }

        for (int i = 0; i < n - 2; i++)
        {
            swap(arr[i], arr[i + 2]);
        }

        return;
    }
};