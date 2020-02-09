#pragma once
#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;



class Node {
public:
	char data[100];
	Node* next;
};

class Stack {
public:
	Node* top;
};

void push(Stack* stack, char* data); 
char* Top(Stack* stack); 
char* pop(Stack* stack);
int priority(char* c);

//Stack shows Postfix, c shows Prefix, size
char* postfix(Stack* stack, char** c, int size);
void Calculate(Stack* stack, char** c, int size);
#endif // !STACK_H
