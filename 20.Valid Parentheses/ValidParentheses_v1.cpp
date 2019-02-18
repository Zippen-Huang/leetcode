class Solution {
public:
    bool isValid(string s) {
       //use stack to solve that remove a pair of bracket
        stack<char>sta;
        
        if(s.size()%2 != 0)
        {
            return false;
        }
        
        for(int i=0;i<s.size();++i)
        {
            if((s[i] == '(') || (s[i] == '[') || (s[i] == '{')) sta.push(s[i]);
        else
        {
            if(sta.empty()) return false;
            if((s[i] == ')') && (sta.top() != '(')) return false;
            if((s[i] == ']') && (sta.top() != '[')) return false;
            if((s[i] == '}') && (sta.top() != '{')) return false;
            sta.pop();
        }
      }
       return sta.empty();
    }
};