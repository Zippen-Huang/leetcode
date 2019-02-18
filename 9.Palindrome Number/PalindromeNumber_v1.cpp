class Solution {
public:
    bool isPalindrome(int x) {
        long long xtmp = 0;
        int xp = x;
        
        if(x<0)
        {
            return false;
        }
        
        while(xp)
        {
            xtmp = (xp%10) + xtmp*10;
            xp = xp/10;
        }
        
        return (x == xtmp);
    }
};