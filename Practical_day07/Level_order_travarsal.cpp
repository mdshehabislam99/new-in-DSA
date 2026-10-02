
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result;

        if (root == nullptr)
        {
            return result;
        }

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {

            int levelSize = q.size();
            vector<int> currentLevel;

            for (int i = 0; i < levelSize; i++)
            {
                TreeNode *f = q.front();
                q.pop();

                currentLevel.push_back(f->val);

                if (f->left != nullptr)
                {
                    q.push(f->left);
                }
                if (f->right != nullptr)
                {
                    q.push(f->right);
                }
            }

          
            result.push_back(currentLevel);
        }

        return result;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution solution;
    vector<vector<int>> result = solution.levelOrder(root);

    for (const auto &level : result)
    {
        for (int val : level)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}