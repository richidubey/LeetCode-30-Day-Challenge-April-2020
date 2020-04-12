//Que Link: https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3297/

class Solution {
public:
    int pos(int a)
    {
        if(a>0) return a;
        
        else return a*-1;
    }
    int lastStoneWeight(vector<int>& stones) {
     
        priority_queue<int> pq(stones.begin(),stones.end());
        
    
        
       while(pq.size()!=1&&pq.size()!=0)
       {
           int a= pq.top();
           
           pq.pop();
           
           int b=pq.top();
           
           pq.pop();
           
           
           if(a!=b)
               pq.push(a-b);
           
           
           
          
       }
        
        if(pq.size()!=0)
        return pq.top();
        else return 0;    }
};
