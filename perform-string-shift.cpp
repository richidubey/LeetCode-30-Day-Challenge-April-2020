//Que Link: https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3299/

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        
        string ret;
        int left=0,right=0;
        
        for(int i=0;i<shift.size();i++)
        {
            if(shift[i][0]==1)
                right+=shift[i][1];
            if(shift[i][0]==0)
                left+=shift[i][1];
        }
        
        
        int final=left-right;
        
        while(final<0)
        {
            
            final=s.size()+final;
        }
        
        cout<<"Final = "<<final<<endl;
            int j=0;
            for(int i=final%s.size();;j++,i++)
            {
                i%=s.size();
                
                if(j==s.size())
                    break;
                
                cout<<"Pushed "<<s[i]<<endl;
                
                ret.push_back(s[i]);   
            }
        
        return ret;
    }
};
