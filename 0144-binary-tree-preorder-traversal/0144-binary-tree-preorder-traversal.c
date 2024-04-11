/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
     if(root==NULL){
        *returnSize=0;
        return NULL;
    }
    int* result = malloc(100 * sizeof(int)); 
    int index = 0;
   void preorder(struct TreeNode* node){
    if(node!=NULL)
    {
     result[index++]=node->val;
      preorder(node->left);
     
      preorder(node->right);
    }
   }
    preorder(root);
     *returnSize=index;
    return result;
}