
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        int countX = 0, countY = 0;
        queue<TreeNode*>q;
        TreeNode* parentX;
        TreeNode* parentY;
        q.push(root);
        while (!q.empty()) {
            for (int i = q.size(); i > 0; --i) {
                TreeNode* node = q.front();
                q.pop();
                if (node->left) {
                    if (node->left->val == x) parentX = node;
                    if (node->left->val == y) parentY = node;
                    q.push(node->left);
                }
                if (node->right) {
                    if (node->right->val == x) parentX = node;
                    if (node->right->val == y) parentY = node;
                    q.push(node->right);
                }
            }
            ++countX; ++countY;
            if (parentX != NULL || parentY != NULL) break;
        }
        return countX == countY && parentY != NULL && parentX != NULL && parentY != parentX;
    }
};
