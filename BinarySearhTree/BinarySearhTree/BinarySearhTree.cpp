#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "BST.h"
using namespace std;

int main()
{
	int rootv; int NumOfData;
	cout << "Set the Root Node of Tree's value : ";
	cin >> rootv;
	Tree<int> tree(rootv);

	cout << "Set the number of Nodes to insert in Tree : ";
	cin >> NumOfData;
	tree.BuildTree(NumOfData);

	cout << "Inorder : ";
	tree.Inorder(tree.Getroot());
}
