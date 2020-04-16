//Que Link: https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/530/week-3/3300/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
      int p=1;
        
        vector<int> ans;
        ans.push_back(1);
        
        
        
        for(int i=1;i<nums.size();i++)
        {
            p*=nums[i-1];
            
            ans.push_back(p);
        }
        
        p=1;
        for(int i=nums.size()-2;i>=0;i--)
        {   
            p*=nums[i+1];
            ans[i]*=p;   
        }
        
     
        return ans;
    }
};
