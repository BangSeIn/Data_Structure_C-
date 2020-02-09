#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Stack.h"
using namespace std;

void push(Stack* stack, char* data) {
	Node* node = new Node;
	strcpy(node->data, data);
	node->next = stack->top;
	stack->top = node;
}

char* Top(Stack* stack) {
	Node* node = stack->top;
	return node->data;
}

char* pop(Stack* stack) {
	if (stack->top == NULL) {
		cout << "Stack is EMPTY" << endl;
		return NULL;
	}
	Node* del = new Node;
	del = stack->top;
	char* d = new char[100];
	strcpy(d, del->data);
	stack->top = del->next;
	free(del);
	return d;

}

int priority(char* c) {
	if (!strcmp(c, "(")) return 0;
	if (!strcmp(c, "+") || !strcmp(c, "-")) return 1;
	if (!strcmp(c, "*") || !strcmp(c, "/"))return 2;
	return 3;
}

//Stack shows Postfix, c shows Prefix, size
char* postfix(Stack* stack, char** c, int size) {
	char str[1000] = "";
	for (int i = 0; i < size; i++) {
		if (!strcmp(c[i], "+") ||
			!strcmp(c[i], "-") ||
			!strcmp(c[i], "*") ||
			!strcmp(c[i], "/")) {
			while (stack->top != NULL &&
				priority(Top(stack)) >= priority(c[i]))
			{
				strcat(str, pop(stack)); strcat(str, " ");
			}
			push(stack, c[i]);
		}
		else if (!strcmp(c[i], "(")) push(stack, c[i]);
		else if (!strcmp(c[i], ")")) {
			while (strcmp(Top(stack), "(")) {
				strcat(str, pop(stack)); strcat(str, " ");
			}
			pop(stack);// pop "("
		}
		else { strcat(str, c[i]); strcat(str, " "); }
	}
	while (stack->top != NULL) {
		strcat(str, pop(stack)); strcat(str, " ");
	}
	return str;
}

void Calculate(Stack* stack, char** c, int size) {
	int x, y, z = 0;
	for (int i = 0; i < size; i++) {
		if (!strcmp(c[i], "+") || !strcmp(c[i], "-") || !strcmp(c[i], "*") || !strcmp(c[i], "/")) {
			x = atoi(pop(stack));
			y = atoi(pop(stack));
			//number that was popped first is pushed last, so care about calculate order
			//ex) "5 / 2" (push) ->Stack : [ 2 5 / ]
			if (!strcmp(c[i], "+")) z = y + x;
			if (!strcmp(c[i], "-")) z = y - x;
			if (!strcmp(c[i], "*")) z = y * x;
			if (!strcmp(c[i], "/")) z = y / x;
			char buffer[100];
			sprintf(buffer, "%d", z);
			push(stack, buffer);
		}
		else {
			push(stack, c[i]);
		}

	}
	cout << "Answer is : " << pop(stack);
}