class Solution{
public:    
    int isPalindrome(string S)
    {
        int n = S.length();
        for (int i = 0; i < n / 2; i++) {
            if (S[i] != S[n - i - 1]) {
                return 0; // Not a palindrome
            }
        }
        return 1; // Palindrome
    }
};
