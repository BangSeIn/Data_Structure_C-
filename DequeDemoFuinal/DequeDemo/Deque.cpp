#include <iostream>
#include <cstdlib>
#include "Deque.h"
using namespace std;
void Init(Deque* dq) {
	dq->head = NULL;
	dq->tail = NULL;
}
int IsEmpty(Deque* dq) {
	if (dq->head == NULL) return 1;
	else return 0;
}

void EnqHead(Deque* dq, Data data) {
	Node* node = new Node; node->data = data;
	node->prev = NULL; node->next = NULL;
	if (IsEmpty(dq)) {
		dq->head = node; dq->tail = node;
	}
	else {
		node->next = dq->head;
		dq->head->prev = node;
		dq->head = node;
	}
}
void EnqTail(Deque* dq, Data data) {

	Node* node = new Node; node->data = data;
	node->prev = NULL; node->next = NULL;
	if (IsEmpty(dq)) {
		dq->head = node; dq->tail = node;
	}
	else {
		node->prev = dq->tail;
		dq->tail->next = node;
		dq->tail = node;
	}
}

Data DeqHead(Deque * dq) {
	if (IsEmpty(dq)) exit(-1);
	else {
		Node* del = dq->head;
		Data ret = dq->head->data;

		if (dq->head == dq->tail) {
			delete del;
			dq->head = NULL;
			return ret;
		}

		else {
			dq->head = dq->head->next;
			delete del;
			dq->head->prev = NULL;
			return ret;
		}

	}
}
Data DeqTail(Deque* dq) {
	if (IsEmpty(dq)) exit(-1);
	else {
		Node* del = dq->tail;
		Data ret = dq->tail->data;

		if (dq->head == dq->tail) {
			delete del;
			dq->head = NULL;
			return ret;
		}
		else {
			dq->tail = dq->tail->prev;
			delete del;
			dq->tail->next = NULL;
			return ret;
		}
	}
}
Data GetHead(Deque* dq) { 
	if(IsEmpty(dq)) exit(-1); return dq->head->data; }
Data GetTail(Deque* dq) {
	if (IsEmpty(dq)) exit(-1); return dq->tail->data;}


void Print(Deque* dq) {
	if (IsEmpty(dq)) exit(-1);
	Node* cur = dq->head;
	while(cur != NULL) {
		cout << cur->data << "  ";
		cur = cur->next;
	}
}