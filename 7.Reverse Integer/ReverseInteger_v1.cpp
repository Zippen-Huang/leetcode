class Solution {
public:
    int reverse(int x) {
        unsigned long long num = 0;
        long int xtmp = x;
        int flag = 1;
        //xtmp = long long(x)；
        if(x>=0)
        {
            flag = 1;
           // xtmp = x;
        }
        else
        {
            flag = -1;
           // xtmp = (-x);
        }
        
        xtmp = abs(xtmp);
        
        while(xtmp>0)
        {
            int y = xtmp%10;
            xtmp = xtmp/10;
            num = y + num*10;
            if(num>INT_MAX)
                num = 0;
        }
        
        return int(flag*num);
        
    }
};