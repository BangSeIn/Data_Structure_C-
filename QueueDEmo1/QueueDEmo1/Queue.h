#pragma once
#ifndef QUEUE_H
#define QUEUE_H

typedef int Data;

struct Node {
	Node* next;
	Node* prev;
	Data data;
};

struct Queue {
	Node* head;
	Node* tail;

};

void Init(Queue* que);
int IsEmpty(Queue* que);
void Enque(Queue* que, Data data);
Data Deque(Queue* que);
void Print(Queue* que);

#endif // !QUEUE)H
