/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumNumbers(struct TreeNode* root) {
    int totalSum=0;
    if(root== NULL)
    {
        return 0;
    }
    int cal(struct TreeNode* root,int currentSum){
        if(root==NULL)
            return 0;
        currentSum=currentSum*10+root->val;
        if(root->left==NULL && root->right==NULL)
            return currentSum;
        else
           return cal(root->left,currentSum)+cal(root->right,currentSum);
    }
    totalSum=cal(root,0);
    return totalSum;
}