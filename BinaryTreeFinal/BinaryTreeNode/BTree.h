#pragma once
#ifndef B_TREE_H
#define B_TREE_H
using namespace std;

typedef int Data;

struct TreeNode {
	TreeNode* left;
	TreeNode* right;
	Data data;
};

TreeNode* CreateTree();
Data GetData(TreeNode& node);
void SetData(TreeNode* node,Data data);

TreeNode* GetLeft(TreeNode* node);
TreeNode* GetRight(TreeNode* node);

void SetAsLeft(TreeNode* parent, TreeNode* child);
void SetAsRight(TreeNode* parent, TreeNode* child);

void Preorder(TreeNode* node);
void Inorder(TreeNode* node);
void Postorder(TreeNode* node);

void Remove(TreeNode* node);

#endif