class Solution {
public:
    int maxSum = INT_MIN;

    int dfs(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        
        int leftGain = max(0, dfs(root->left));
        int rightGain = max(0, dfs(root->right));

        
        int currentPathSum = root->val + leftGain + rightGain;
        maxSum = max(maxSum, currentPathSum);

       
        return root->val + max(leftGain, rightGain);
    }

    int maxPathSum(TreeNode* root) {
        dfs(root);
        return maxSum;
    }
};