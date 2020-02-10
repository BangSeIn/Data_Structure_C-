#pragma once
#ifndef QUEUE_H
#define QUEUE_H
typedef int Data;

struct Node {

    int data= 0;
    Node* next = NULL;
};

struct Queue {

    Node* front = NULL;
    Node* rear = NULL;
    int count = 0;
};

void Push(Queue& q, Data data);
int Pop(Queue& q);
void Print(Queue& q);

#endif