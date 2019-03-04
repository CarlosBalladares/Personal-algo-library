class Solution
{
public:
  int getDepth(TreeNode *curr, int target, int depth)
  {
    if (curr == NULL)
    {
      return -1;
    }
    if (curr->val == target)
    {
      return depth;
    }

    return max(getDepth(curr->left, target, depth + 1), getDepth(curr->right, target, depth + 1));
  }

  TreeNode *getParent(TreeNode *curr, int target, TreeNode *parent)
  {
    if (curr == NULL)
    {
      return NULL;
    }
    if (curr->val == target)
    {
      return parent;
    }
    TreeNode *n1 = getParent(curr->left, target, curr);
    TreeNode *n2 = getParent(curr->right, target, curr);

    if (n1 == NULL)
      return n2;
    else
      return n1;
  }
  bool isCousins(TreeNode *root, int x, int y)
  {
    int depth1 = getDepth(root, x, 0);
    int depth2 = getDepth(root, y, 0);

    if (depth2 == -1 || depth1 == -1)
    {
      return false;
    }

    TreeNode *n1 = getParent(root, x, NULL);
    TreeNode *n2 = getParent(root, y, NULL);

    return n1 != n2 && depth1 == depth2;
  }
};
