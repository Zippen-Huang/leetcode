class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int num = 0;
        for(int i=0;i<n;i++)
        {
            //s.at[i];
            switch(s[i])
            {
                case 'I' : num = num + 1;break;
                case 'V' : num = num + 5;break;
                case 'X' : num = num + 10;break;
                case 'L' : num = num + 50;break;
                case 'C' : num = num + 100;break;
                case 'D' : num = num + 500;break;
                case 'M' : num = num + 1000;break;
                default: ;break;
            }
            
            if(i != 0)
            {
                if((s[i-1] == 'I') && ((s[i] == 'V')||(s[i] == 'X')))
                num = num - 2*1;
                    
                if((s[i-1] == 'X') && ((s[i] == 'L')||(s[i] == 'C')))
                num = num - 2*10;
                    
                if((s[i-1] == 'C') && ((s[i] == 'D')||(s[i] == 'M')))
                num = num - 2*100;  
            }
        }
        return num;
        
    }
};