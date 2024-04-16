/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* addOneRow(struct TreeNode* root, int val, int depth) {
    struct TreeNode *create_newnode(int val){
        struct TreeNode *newnode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        newnode->val=val;
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
    void addrowHelper(struct TreeNode *root,int val,int depth,int current){
        if(!root){
            return;
        }
        if(current==depth-1){
            struct TreeNode *leftchild=create_newnode(val);
            leftchild->left=root->left;
            root->left=leftchild;
            struct TreeNode *rightchild=create_newnode(val);
            rightchild->right=root->right;
            root->right=rightchild;
        }
        else{
            addrowHelper(root->left,val,depth,current+1);
            addrowHelper(root->right,val,depth,current+1);
        }
    }
    if(depth==1){
        struct TreeNode *newroot=create_newnode(val);
        newroot->left=root;
        return newroot;
    }
    addrowHelper(root,val,depth,1);
    return root;
    
}