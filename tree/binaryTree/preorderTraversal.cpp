#include <iostream>
#include <vector>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {


        vector<int> result;
         test(root, result);
        return result;
    }

    void test(TreeNode *root, vector<int> &result) {
        if (root != nullptr) {
            result.push_back(root->val);
            cout << root->val << endl;
            if (root->left != nullptr) {
                test(root->left,result);
               
            }
            if (root->right != nullptr) {
                test(root->right,result);
            }
        };
    }
};


int main() {


    Solution *pSolution = new Solution;

    TreeNode *root = new TreeNode;

    root->left = nullptr;
    root->val =1 ;
    root->right = new TreeNode;
    root->right->val = 2;
    root->right->left =new TreeNode;
    root->right->left->val=3;
    root->right->left->left= nullptr;
    root->right->left->right=nullptr;

    const vector<int> &res = pSolution->preorderTraversal(root);



    cout<<123<<endl;
}