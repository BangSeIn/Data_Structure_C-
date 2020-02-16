#define _CRT_NO_SECURE_WARNINGS
#include <iostream>
#include <cstdlib>
#define INF 999999
#define SIZE 10001
using namespace std;

struct Node {
	Node* next = NULL;
	int index = 0;
};

struct Queue {
	Node* head = NULL;
	Node* tail = NULL;
	int NumData = 0;
};

typedef Node* List; 
List* list;	int No, Ed, visit[SIZE];	

//Function that is used for linked-list
void Insert(Node* root, int index) {
	Node* node = new Node;
	node->index = index;
	node->next = root->next;
	root->next = node;
} 

void Enque(Queue* q, int index) {
	Node* node = new Node;
	node->index = index; node->next = NULL;
	if (q->NumData == 0) {
		q->head = node; q->tail = node;
		q->NumData++;
	}
	else {
		q->tail->next = node;
		q->tail = node;
		q->NumData++;
	}
}

int Deque(Queue* q) {
	if (q->NumData == 0) return -INF;
	else {
		Node* del = q->head;
		int ret = q->head->index;
		q->head = q->head->next;
		delete del;
		q->NumData--;
		return ret;
	}
}

void BFS(int begin) {
	Queue q; 
	Enque(&q, begin); visit[begin] = 1;
	while (q.NumData != 0) {
		int v = Deque(&q);
		cout << v << "  ";
		Node* cur = list[v]->next;
		if (cur != NULL) {
			int idx = cur->index;
			
			if (!visit[idx]) {
				Enque(&q, idx); 
				visit[idx] = 1;
			}
			cur = cur->next;
		}
	}
}

int main()
{
	cout << "Set the Numbers of Nodes and Edges : ";
	cin >> No >> Ed;
	list = new Node *[SIZE];
	for (int i = 1; i < No + 1; i++) {
		list[i] = new Node;
		list[i]->next = NULL;
	}
	for (int i = 0; i < Ed; i++) {
		int x, y;
		cout << "Set the Nodes those are connected : ";
		cin >> x >> y;
		Insert(list[x], y);
		Insert(list[y], x);
	}
	BFS(1); // fromm the root Node(index 1)
	return 0;

}
