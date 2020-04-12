//Que Link : https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3293/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int findlen(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        
         int lleft=0,lright=0;
        
          if(root->left!=NULL)
        {    lleft=findlen(root->left);
           
        }
        
        if(root->right!=NULL)
        {    lright=findlen(root->right);
          
        }
        
        
        return max(1+lleft,1+lright);
    }
        
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        int lleft=0,lright=0;
        
        int mleft=0,mright=0;
        
        if(root->left!=NULL)
        {    lleft=findlen(root->left);
             mleft=diameterOfBinaryTree(root->left);
        }
        
        if(root->right!=NULL)
        {    lright=findlen(root->right);
            mright=diameterOfBinaryTree(root->right);
        }
        
        int curr=lleft+lright;
        
        curr=max(curr,mleft);
        
        curr=max(curr,mright);
        
        cout<<root->val<<" returns "<<curr<<" as max diff"<<endl;
        
        return curr;
                
    }
};
