#pragma once
#ifndef BST_H
#define BST_H
#include <iostream>
using namespace std;

template <typename T>
class Tree;

template <typename T>
class TreeNode {
public:
    T data;
    TreeNode* left; TreeNode* right; //Each Node's child

    TreeNode(T data = 0, TreeNode* left = NULL, TreeNode* right = NULL) {
        this->data = data;
        this->left = left;
        this->right = right;
    };
};

template <typename T>

class Tree : public TreeNode<T> {
    TreeNode<T>* root;
public:
    Tree(T data = 0) {
        root = new TreeNode<T>(data);
    }
    void BuildTree(int size) { //Get value of size and make Treenodes as much as it
        int s = size;
        for (int i = 0; i < s; i++) {
            int data;
            cout << "Set " << i + 1 << "th Node's value : ";
            cin >> data;
            Insert(new TreeNode<int>(data));
            cout << endl;
        }
    }

    TreeNode<T>* search(TreeNode<T>* root, T data) {
        //if there are no Tree that has 'data' value
        if (root == NULL) return NULL;
        //if root node has 'data' value
        else if (root->data == data) return root;
        //if data is bigger than root node's data, recall fucntion with node's left child
        else if (root->data > data) search(root->left, data);
        else search(root->right, data);


    }


    void Insert(TreeNode<T>* node) {
        //If New TreeNode is not exist in the Previous Tree
        if (search(root, node->data) == NULL)
        {   
            //Try to find the place of New TreeNode
            TreeNode<T>* parent = NULL;
            TreeNode<T>* cur = root;

            while (cur != NULL) {
                parent = cur;
                if (parent->data < node->data)
                    cur = cur->left;
                else
                    cur = cur->right;
            }

            //Now, compare new TreeNode with 'TreeNode<T>* parent' to set which child of it
            //TreeNode<T>* parent has no child
            if (parent->data < node->data)
                parent->left = node;
            else
                parent->right = node;
        }
    };



    TreeNode<T>* Getroot() { return root; };

    void Inorder(TreeNode<T>* root) {
        if (root != NULL) {
            cout << "(";
            Inorder(root->left);
            visit(root);
            Inorder(root->right);
            cout << ")";
        }
    }
    void visit(TreeNode<T>* cur) {
        //for now, just show the node's data
        cout << " " << cur->data << " ";
    }

};





#endif // !BST_H