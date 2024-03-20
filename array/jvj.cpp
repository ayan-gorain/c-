class Solution{
public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        // If the number is less than or equal to 0, it cannot be a power of 2.
        if (n <= 0) {
            return false;
        }
        
        // Check if there is only one set bit in the binary representation of n.
        // If yes, then it's a power of 2.
        return (n & (n - 1)) == 0;
    }
};
