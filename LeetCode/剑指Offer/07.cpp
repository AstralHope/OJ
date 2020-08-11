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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTree(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
    }
private:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int prestart, int preend, int instart, int inend){
        if(prestart>preend || instart> inend){
            return NULL;
        }
        TreeNode* node = new TreeNode(preorder[prestart]);
        if(prestart != preend){
            for(int i=instart;i<=inend;i++){
                if(inorder[i]==node->val){
                    //截取左右两个子树的序列进行递归
                    node->left=buildTree(preorder,inorder,prestart+1,prestart+i-instart,instart,instart+i-instart-1);
                    node->right=buildTree(preorder,inorder,prestart+i-instart+1,preend,instart+i-instart+1,inend);
                }
            }
        }
        return node;
    }
};