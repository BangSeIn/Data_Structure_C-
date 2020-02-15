#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Queue.h"
using namespace std;
void Init(Queue* que) {
	que->head = NULL;
	que->tail = NULL;
}

int IsEmpty(Queue* que) {
	if (que->tail == NULL) return 1;
	else return 0;
}

void Enque(Queue* que, Data data) {
	Node* node = new Node;
	node->data = data;	node->next = NULL; node->prev = NULL;
	if (IsEmpty(que)) {
		que->head = node;
		que->tail = node;
	}
	else {
		node->prev = que->tail;
		que->tail->next = node;
		que->tail = que->tail->next;
	}
}

Data Deque(Queue* que) {
	if (IsEmpty(que)) exit(-1);

	else {
		Node* del = que->head;
		Data ret = que->head->data;

		if (que->head == que->tail) {
			que->head = NULL;
			que->tail = NULL;
			delete del;
			return ret;
		}
		que->head = que->head->next;
		delete del;
		return ret;
	}
}

void Print(Queue* que) {
	Node* cur = que->head;
	while (cur != NULL) {
		cout << cur->data << "  ";
		cur = cur->next;
	}
}