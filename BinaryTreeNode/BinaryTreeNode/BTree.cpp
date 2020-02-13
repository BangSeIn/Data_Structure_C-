#include <iostream>
#include "BTree.h"
using namespace std;

TreeNode* CreateTree() {
	TreeNode* node = new TreeNode;
	node->left = NULL; node->right = NULL;
	return node;
}
Data GetData(TreeNode& node) {
	return node.data;
}
void SetData(TreeNode* node, Data data) {
	node->data = data;
}

TreeNode* GetLeft(TreeNode* node) {
	return node->left;
}
TreeNode* GetRight(TreeNode* node) {
	return node->right;
}

void SetAsLeft(TreeNode* parent, TreeNode* child) {
	if (parent->left != NULL) delete parent->left;
	parent->left = child;
}
void SetAsRight(TreeNode* parent, TreeNode* child) {
	if (parent->right != NULL) delete parent->right;
	parent->right = child;
}

void Preorder(TreeNode* node) {
	if (node!=NULL) {
	cout << node->data << "  ";
	Preorder(node->left);
	Preorder(node->right);
}
}

void Inorder(TreeNode* node) {
	if (node != NULL) {
		Inorder(node->left);
		cout << node->data << "  ";
		Inorder(node->right);
	}
}

void Postorder(TreeNode* node) {
	if (node != NULL) {
		Postorder(node->left);
		Postorder(node->right);
		cout << node->data << "  ";
	}
}


void Remove(TreeNode* node) {
	if (node == NULL) return;

	Remove(node->left);
	Remove(node->right);

	delete node;

	}

