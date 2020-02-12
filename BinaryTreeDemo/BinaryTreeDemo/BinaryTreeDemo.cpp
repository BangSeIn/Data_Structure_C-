#include <iostream>
#include <cstdlib>
#include "BTree.h"
using namespace std;

int main(){
	Node* n4 = Init(4, NULL, NULL);
	Node* n5 = Init(5, NULL, NULL);
	Node* n6 = Init(6, NULL, NULL);
	Node* n7 = Init(7, NULL, NULL);
	Node* n2 = Init(2, n4, n5);
	Node* n3 = Init(3, n6, n7);
	Node* root = Init(1, n2, n3);
	cout << "Preorder : ";
	Preorder(root); cout << endl;
	cout << "Inorder : ";
	Inorder(root); cout << endl;
	cout << "Postorder : ";
	Postorder(root); cout << endl;


}