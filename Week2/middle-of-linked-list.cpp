//Que Link:https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3290/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        int i=0;
        
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(1)
        {
            if(fast->next==NULL)
                return slow;
            
            if(fast->next->next==NULL)
                return slow->next;
            
            fast=fast->next->next;
            
            slow=slow->next;
        }
        
        printf("Oyye");
        return slow;
    }
};
