class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0) return false;

       string original=to_string(x);

       string reversed=original;

       reverse(reversed.begin(), reversed.end());

       return original==reversed;
        
    }
};