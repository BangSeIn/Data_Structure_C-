#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct Node {
	Node* next;
	int connect; // index number of Node that is connected wih this
	int distance;
};

void AddNode(Node& node, int index, int distance) {
	Node* newnode = new Node;
	newnode->connect = index;
	newnode->distance = distance;
	newnode->next = node.next;
	node.next = newnode;
}

void ShowGrapgh(Node& ptr) {
	Node* cur = ptr.next;
	while (cur != NULL) {
		cout <<" to. "<< cur->connect << "th Node / Distance : "
			<< cur->distance;
		cur = cur->next;
	}
	
}

int main()
{
	int n; cout << "Number of Nodes in Graph : "; cin >> n;
	Node* Graph = new Node[n + 1]; cout << endl;
	for (int i = 1; i < n + 1; i++) {
		Graph[i].next = NULL;
	}

	int m; cout << "Number of Egdes in Graph :"; cin >> m;
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << "Set Nodes and Distance  :  ";
		int n1, n2, d; cin >> n1 >> n2 >> d;
		AddNode(Graph[n1], n2, d);
	}

	for (int i = 1; i < n + 1; i++) {
		cout  << i << "th Node :";
		ShowGrapgh(Graph[i]);
		cout << endl;
	}
	return 0;
}
