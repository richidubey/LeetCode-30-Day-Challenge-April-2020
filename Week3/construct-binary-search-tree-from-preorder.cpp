//Que Link: https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/530/week-3/3305/

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
    
   
 
    TreeNode* makeTree(vector<int>& preorder, int left, int right)
    {
        
        if(left>right)
            return NULL;
        
         
        TreeNode* root=new TreeNode();
        
        root->val=preorder[left];
   
        int rstart=-1;
        
        for(int i=left;i<=right;i++)
        {
            if(preorder[i]>root->val)
            {
                rstart=i;
                break;
            }
        }
       
        if(rstart==-1)
        {
            root->left=makeTree(preorder,left+1,right);
            root->right=NULL;
        }
        else
        {
            root->left=makeTree(preorder,left+1,rstart-1);
            root->right=makeTree(preorder,rstart,right);
        }
        
        return root;
    }
        
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        //TODO: Add case for size 0 and 1;
        if(preorder.size()==0)
            return NULL;
        
            
      return makeTree(preorder,0,preorder.size()-1);
      
    }
};
