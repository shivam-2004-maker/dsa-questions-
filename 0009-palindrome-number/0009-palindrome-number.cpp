class Solution {
public:
    bool isPalindrome(int x) {
        int number = x;
        
        long long ans = 0;
        while(x>0){
         int lastdigit = x % 10;
         ans = ans*10+lastdigit;
         x = x/10;
        }
       return number == ans;
    }
};