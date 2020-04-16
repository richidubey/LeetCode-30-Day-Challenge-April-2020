//Que Link: https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/530/week-3/3300/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> left;
        vector<int>right(nums.size(),1);
        
        int leftp=1,rightp=1;
        
        left.push_back(leftp);
        
        
        vector<int> ans;
        
        for(int i=1;i<nums.size();i++)
        {
            leftp*=nums[i-1];
            
            left.push_back(leftp);
        }
        
        
        for(int i=nums.size()-2;i>=0;i--)
        {
            rightp*=nums[i+1];
            right[i]=rightp;   
        }
        
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(left[i]*right[i]);
        }
        
        return ans;
    }
};
