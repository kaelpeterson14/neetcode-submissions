/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int my_max = 0;
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        recursive(root, 0);
        return my_max;

    }
    void recursive(TreeNode* root, int height){
        if(root != nullptr){
            height = height + 1;
            if(height > my_max){
                my_max = height;
            }
            recursive(root->left, height);
            recursive(root->right, height);
        }
        return;
    }
};
