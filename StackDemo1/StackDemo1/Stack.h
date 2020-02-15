#pragma once
#ifndef STACK_H
#define STACK_H

typedef int Data;

struct Node {
	Node* next;
	Data data;
};

struct Stack {
	Node* top;
	int NumData;
};

void Init(Stack* stack);
int IsEmpty(Stack* stack);
void Push(Stack* stack, Data data);
Data Top(Stack* stack);
Data Pop(Stack* stack);
void Print(Stack* stack);



#endif