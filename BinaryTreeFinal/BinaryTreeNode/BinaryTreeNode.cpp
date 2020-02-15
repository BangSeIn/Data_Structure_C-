#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "BTree.h"
using namespace std;

int main()
{
    TreeNode* root = CreateTree();
    TreeNode* left = CreateTree();
    TreeNode* right = CreateTree();

    left->left = CreateTree();
    SetData(left->left, 4);

    left->right = CreateTree();
    SetData(left->right, 3);

    SetData(root, 7);
    SetData(left, 6);
    SetAsLeft(root, left);
    SetData(right, 5);
    SetAsRight(root, right);
    Preorder(root); cout << endl;
    Inorder(root); cout << endl;
    Postorder(root); cout << endl;

    Remove(root->left);
    root->left = CreateTree();
    SetData(root->left, 44);
    Preorder(root);
    

}
