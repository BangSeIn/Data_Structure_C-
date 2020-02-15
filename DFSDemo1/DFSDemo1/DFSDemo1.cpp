#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10001

struct Node {
	Node* next;
	int index;
};

typedef Node* List;

List* list; // = Node** list
int no, ed, c[SIZE] = { 0 };

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
}
typedef int* ii; typedef int** iii;
int main()
{	
	int* c = new int[10];
	ii* cc = new int* [10];
	int** a; a = new ii[10];
	a[0] = new int; 

	cout << "Set amount of Nodes : "; cin >> no;
	cout << "Set amount of Edes : "; cin >> ed;
	list = new List[SIZE]; // new Node*[size];
	for (int i = 1; i <= no; i++) {
		list[i] = new Node;
		list[i]->next = NULL;
	}
	for (int i = 0; i < ed; i++) {
		int a, b;
		cout << "Set number of Node and index : ";
		cin >> a >> b;
		Add(list[a], b);
		Add(list[b], a);
	}
	DFS(1);

}

