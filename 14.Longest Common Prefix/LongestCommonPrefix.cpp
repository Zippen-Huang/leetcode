class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        //int m = strs[0].size();
        int m = 0;
        bool iscom = false;
        string s;
        
        if(n<=0)
        {
            return string("");
        }
        else
        {
            m = strs[0].size();
        }
        
        for(int i=0;i<m;i++)
        {
          char cmpch = strs[0].at(i);
          for(int j=0;j<n;j++)
          {
              if(strs[j].size()<(i+1))
              {
                  iscom = false;
                  break;
              }
              //iscom = strcmp(cmpch,strs[j].at(i));
              if(cmpch == strs[j].at(i))
              {
                  iscom = true;
              }
              else
              {
                  iscom = false;
                  break;
              }
              
              //if(iscom == false) break;
          }
          
          if(iscom == false)
          {
              break;
          }
          else
          {
              s +=  cmpch;
          }
          
        }
        return s;
    }
};