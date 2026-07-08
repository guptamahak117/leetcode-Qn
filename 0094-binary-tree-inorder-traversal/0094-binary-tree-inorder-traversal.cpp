class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorder(root, result);
        return result;
    }

    void inorder(TreeNode* node, vector<int>& result) {
        if (node == nullptr) return;

        inorder(node->left, result);   // Traverse left subtree
        result.push_back(node->val);   // Visit node
        inorder(node->right, result);  // Traverse right subtree
    }
};
