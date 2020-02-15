#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Stack.h"
using namespace std;


void Init(Stack* stack) {
	stack->top = NULL;
	stack->NumData = 0;
}

int IsEmpty(Stack* stack) {
	if (stack->top == NULL)return 1;
	else return 0;
}
void Push(Stack* stack, Data data) {
	Node* node = new Node;
	node->data = data;
	if (IsEmpty(stack)) {
		stack->top = node;
	}
	else {
		node->next = stack->top;
		stack->top = node;
	}
}

Data Top(Stack* stack) { return stack->top->data; }

Data Pop(Stack* stack) {
	if (IsEmpty(stack)) exit(-1);

	Node* del = stack->top;
	Data ret = stack->top->data;
	stack->top = stack->top->next;

	delete del;
	return ret;

}
void Print(Stack* stack) {
	Node* cur = stack->top;
	while (cur!=NULL) {
		cout << cur->data << "  ";
		cur = cur->next;
	}
}