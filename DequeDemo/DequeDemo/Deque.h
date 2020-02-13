#pragma once
#ifndef DEQUE_H
#define DEQUE_H

#define TRUE 1
#define FALSE 0

typedef int Data;

struct Node {
	Node* prev = NULL;
	Node* next = NULL;
	Data data;
};

struct Deque {
	Node* head;
	Node* tail;
};

void Init(Deque& dq);
int IsEmpty(Deque& dq);

void EnqHead(Deque& dq, Data data);
void EnqTail(Deque& dq, Data data);

Data DeqHead(Deque& dq);
Data DeqTail(Deque& dq);

Data GetHead(Deque& dq);
Data GetTail(Deque& dq);

void SetHead(Deque& dq, Node& n2);
void SetTail(Deque& dq, Node& n2);

#endif