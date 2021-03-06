/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* root) {
    if(root==NULL)
    return NULL;

    root->left=invertTree(root->left) ;
    root->right=invertTree(root->right) ;
    TreeNode*temp=root->left ;
    root->left=root->right ;
    root->right=temp;

    return root ;

}
