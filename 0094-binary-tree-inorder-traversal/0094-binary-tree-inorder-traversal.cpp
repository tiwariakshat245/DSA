class Solution {
public:
    void dfs(TreeNode* node, vector<int>& result) {
        if (!node) return;
        dfs(node->left, result);
        result.push_back(node->val);
        dfs(node->right, result);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        dfs(root, result);
        return result;
    }
};