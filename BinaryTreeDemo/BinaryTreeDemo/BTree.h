#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
using namespace std;
typedef int Data;

struct Node {
	Data data;
	Node* left;
	Node* right;
};

Node* Init(Data data, Node* left, Node* right) {
	Node* node = new Node;
	node->data = data;
	node->left = left;
	node->right = right;
	return node;
}

void Preorder(Node* node) {

	if (node) {
		cout << node->data<<"  ";
		Preorder(node->left);
		Preorder(node->right);
	}
}

void Inorder(Node* node) {
	if (node) {
		Inorder(node->left);
		cout << node->data << "  ";
		Inorder(node->right);
	}
}

void Postorder(Node* node) {
	if (node) {
		Postorder(node->left);
		Postorder(node->right);
		cout << node->data << "  ";

	}
}