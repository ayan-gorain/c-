class Solution {
public:
    std::pair<long long, long long> getMinMax(long long a[], int n) {
        long long min = LLONG_MAX;
        long long max = LLONG_MIN;
        
        for (int i = 0; i < n; i++) {
            if (a[i] < min) {
                min = a[i];
            }
            if (a[i] > max) {
                max = a[i];
            }
        }
        
        return std::make_pair(min, max);
    }
};