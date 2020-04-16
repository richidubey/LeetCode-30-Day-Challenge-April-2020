//Que Link:https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3291/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
      
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='#')
            {
                S.erase(S.begin()+i);
                
                if((i-1)<S.size())
                {
                    S.erase(S.begin()+i-1);
                    i--;
                }
                 i--;   
            }
        }
        
        for(int i=0;i<T.size();i++)
        {
            if(T[i]=='#')
            {
                T.erase(T.begin()+i);
                
                if((i-1)<T.size())
                {
                    T.erase(T.begin()+i-1);
                    i--;
                }
                    i--;
            }
        }
        
        if(S==T)
            return true;
        else return false;
        
    }
};
