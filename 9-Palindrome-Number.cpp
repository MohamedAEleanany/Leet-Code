class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers cannot be palindromes
        if (x < 0) return false;
        
        // Reverse the number
        int original = x;
        long reversed = 0; // Use long to handle potential overflow
        
        while (x > 0) {
            int digit = x % 10;    // Extract the last digit
            reversed = reversed * 10 + digit; // Add digit to the reversed number
            x /= 10;               // Remove the last digit
        }
        
        // Compare the original number with the reversed number
        return original == reversed;
    }
};