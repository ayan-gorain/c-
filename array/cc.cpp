class Solution
{
public:
    vector<int> findIndex(int arr[], int n, int key)
    {
        int start = -1, end = -1;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == key)
            {
                if (start == -1)
                    start = i;
                end = i;
            }
        }
        vector<int> result;
        if (start == -1) // Key not found
        {
            result.push_back(-1);
            result.push_back(-1);
        }
        else
        {
            result.push_back(start);
            result.push_back(end);
        }
        return result;
    }
};