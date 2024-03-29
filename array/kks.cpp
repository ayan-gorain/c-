class Solution {
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m) {
        // Create an unordered_set to store unique elements.
        std::unordered_set<int> unionSet;

        // Iterate through array a and add elements to the union set.
        for (int i = 0; i < n; ++i) {
            unionSet.insert(a[i]);
        }

        // Iterate through array b and add elements to the union set.
        for (int i = 0; i < m; ++i) {
            unionSet.insert(b[i]);
        }

        // Return the size of the union set, which represents the count of union elements.
        return unionSet.size();
    }
};