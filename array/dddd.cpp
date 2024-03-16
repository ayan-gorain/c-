#include <vector>
#include <algorithm>

class Solution {
public:
    int find_median(std::vector<int> v) {
        // Sort the array
        std::sort(v.begin(), v.end());
        
        int n = v.size();
        // If the number of elements is odd, return the middle element
        if (n % 2 != 0)
            return v[n / 2];
        // If the number of elements is even, return the average of two middle elements
        else
            return (v[n / 2] + v[(n / 2) - 1]) / 2;
    }
};
