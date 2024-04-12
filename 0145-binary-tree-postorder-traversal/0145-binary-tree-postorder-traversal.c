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
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
   if(root==NULL){
      *returnSize=0;
       return NULL;
   }
    
    int index=0;
    int *array=malloc(100* sizeof(int));
    void postorder(struct TreeNode* node){
        if(node!=NULL){
            postorder(node->left);
            postorder(node->right);
            array[index++]=node->val;
        }
    }
    postorder(root);
    *returnSize=index;
    return array;
}