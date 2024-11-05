class Solution {
public:
    int diameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
private:
    int height(TreeNode* node) {
        if (!node) return 0; 
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        diameter = std::max(diameter, leftHeight + rightHeight);
        return 1 + std::max(leftHeight, rightHeight);
    }
};
