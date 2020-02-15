/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10001

struct Node {
	Node* next;
	int index;
};

typedef Node* List;

List* list;
int c[SIZE] = { 0 };

void Add(Node* root, int index) {
	Node* node = new Node;
	node->index = index; node->next = root->next;
	root->next = node;
}

void DFS(int x) {
	if (c[x]) exit(-1);
	c[x] = 1;
	cout << x << "th  ";
	Node* cur = list[x]->next;
	while (cur != NULL) {
		int nextidx = cur->index;
		DFS(nextidx);
		cur = cur->next;
	}
}*/