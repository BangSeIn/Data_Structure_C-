#include <iostream>
#include <cstdlib>
#include "Deque.h"
using namespace std;

void SetHead(Deque& dq, Node& n2) {
	*(dq.head->prev) = n2;
}void SetTail(Deque& dq, Node& n2) {
	*(dq.head->next) = n2;
}
void Init(Deque& dq) {
	dq.head = NULL;
	dq.tail = NULL;
}
int IsEmpty(Deque& dq) {
	if (dq.head == NULL) return TRUE;
	else return FALSE;
}

void EnqHead(Deque& dq, Data data) {
	Node* node = new Node;
	node->data = data;

	node->next = dq.head;

	if (dq.head == NULL) {
		dq.tail = node;
	}
	
	SetHead(dq, *node);

	node->prev = NULL;
	dq.head = node;
}
void EnqTail(Deque& dq, Data data) {
	Node* node = new Node;
	node->data = data;

	node->prev = dq.tail;

	if (dq.tail == NULL) {
		dq.head = node;
	}

	SetTail(dq, *node);

	node->next = NULL;
	dq.tail = node;
}

Data DeqHead(Deque& dq) {
	if (IsEmpty(dq)) {
		cout << "DEQUE EMPTY" << endl;
		exit(-1);
	}
	Node* del = dq.head;
	Data ret = dq.head->data;

	dq.head = dq.head->next;
	delete del;

	if (dq.head == NULL)
		dq.tail = NULL; //Deque is Empty
	else
		dq.head->prev = NULL; //Initiate new head

	return ret;

}
Data DeqTail(Deque& dq) {
	if (IsEmpty(dq)) {
		cout << "DEQUE EMPTY" << endl;
		exit(-1);
	}
	Node* del = dq.tail;
	Data ret = dq.tail->data;

	dq.tail = dq.tail->prev;
	delete del;

	if (dq.tail == NULL)
		dq.head = NULL; //Deque is Empty
	else
		dq.tail->next = NULL; //Initiate new head

	return ret;

}

Data GetHead(Deque& dq) {
	if (IsEmpty(dq)) exit(-1);
	return dq.head->data;
}
Data GetTail(Deque& dq) {
	if (IsEmpty(dq)) exit(-1);
	return dq.tail->data;
}

