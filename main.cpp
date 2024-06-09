#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

//checking weather a tree is a BST
bool isBST(TreeNode * temp){

    //Base Case
    if(temp == nullptr){
        return true;
    }

    if(temp->left != nullptr && temp->left->val >= temp->val){
        return false;
    }

    if(temp->right != nullptr && temp->right->val <=  temp->val){
        return false;
    }

    //recursive case

    return isBST(temp->left) && isBST(temp->right);
}




int main() {
    // Testing on a sample binary tree
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(5);


    string value = (isBST(root))? "true" : "false";
    cout << "Is the tree a BST? "<< value;
    return 0;
}


