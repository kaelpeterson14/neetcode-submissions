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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if((((root) == nullptr))){
            return false;
        }

        if(((root->val) == (subRoot->val))){
            if(verification(root, subRoot)){
                return true;
                }

        } else {
            return (isSubtree((root->left), subRoot) || isSubtree((root->right), subRoot));
            }
        return (isSubtree((root->left), subRoot) || isSubtree((root->right), subRoot));;
    }

    bool verification(TreeNode* root, TreeNode* subRoot) {
        if((subRoot == nullptr && root == nullptr)){
            return true;
        }
        if((subRoot == nullptr || root == nullptr || root->val != subRoot->val)){
            return false;
        }

        if((root->val) == (subRoot->val)){
            return (verification(root->left, subRoot->left) && verification(root->right, subRoot->right));
        } 
        return false;

    }

};