#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
using namespace std;

struct TreeNode {
	int data;
	TreeNode* left;
	TreeNode* right;
};
	
TreeNode* Insert(TreeNode* tr, int data) {
	if (tr == NULL) {
		TreeNode *node = new TreeNode;
		node->left = node->right = NULL;
		node->data = data;
		return node;
	}

	else {
		if (tr->data > data) {
			tr->left = Insert(tr->left, data);
			return tr;
		}
		else {
			tr->right = Insert(tr->right, data);
			return tr;
		}
	}
}

TreeNode* Search(TreeNode* tr, int search) {
	if (tr == NULL) { return NULL; }
	if (search == tr->data) return tr;
	else if (search > tr->data) Search(tr->right, search);
	else Search(tr->left, search);
}

void Preorder(TreeNode* tr) {
	if (tr == NULL) return;
	cout <<" ( "<< tr->data << "  ";
	Preorder(tr->left);
	Preorder(tr->right);
	cout << " ) ";
}

TreeNode* MinNode(TreeNode* root) {
	TreeNode* ret = root;
	while (ret->left != NULL) {
		ret = ret->left;
	}
	return ret;

}

TreeNode* Remove(TreeNode* root, int data) {
	TreeNode* node = NULL;
	if (root == NULL)return NULL;
	if (root->data > data) root->left = Remove(root->left, data);
	else if (root->data < data) root->right = Remove(root->right, data);
	else {
		if (root->left != NULL && root->right != NULL) {
			node = MinNode(root->right);
			root->data = node->data;
			root->right = Remove(root->right, node->data);
		}
		else {
			node = (root->left != NULL) ? root->left : root->right;
			delete root;
			return node;
		}
	}
	return root;
}


int main()
{
	TreeNode* root = NULL;
	root = Insert(root, 30);
	root = Insert(root, 17);
	root = Insert(root, 48);
	root = Insert(root, 5);
	root = Insert(root, 23);
	root = Insert(root, 37);
	root = Insert(root, 50);
	root = Remove(root, 30);
	
	//cout << root->data;
	Preorder(root);
	
}

