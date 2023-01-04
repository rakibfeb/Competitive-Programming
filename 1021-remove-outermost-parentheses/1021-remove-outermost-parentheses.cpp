class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        int flag = 0,l = int(s.length());
        string result;
        for(int i = 0;i < l;i++)
        {
            if(s[i] == '(')
            {
                flag += 1;
                
                 result += flag > 1 ? "(" : "";
//                 if(flag < 2)
//                 {
//                     result = result+"";
//                 }
//                 else
//                 {
//                     result = result + "(";
//                 }
            
            } else 
            {
                flag -= 1;
                
                result += flag > 0 ? ")" : "";
                // if(flag < 1)
                // {
                //     result = result+"";
                // }
                // else
                // {
                //     result = result + ")";
                // }                            
            }
            
        }
        return result;
    }
};