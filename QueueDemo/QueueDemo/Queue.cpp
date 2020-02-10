#include <iostream>
#include "Queue.h"
#define INF 9999999
using namespace std;

void Push(Queue& q, Data data) {
    Node *node = new Node;
    node->data = data;
    if (q.count == 0) {
        q.front = node;
        q.rear = q.front;
    }
    else {
        q.rear->next = node;
        q.rear = node;
    }
  
    q.count++;
}

int Pop(Queue& q) {
    if (q.count == 0) {
        cout << "QUEUE EMPTY" << endl;
        return -INF;
    }
    else {
        Node* node = q.front;
        Data d = node->data;
        q.front = node->next;
        delete node;
        q.count--;
        return d;

    }
}

void Print(Queue& q) {
    cout << "Size of Queue is now : " << q.count << endl;
    Node* cur = q.front;
    while (cur != NULL) {
        cout << cur->data<<"    ";
        cur = cur->next;
    }
    cout <<endl<< "Queue end"<<"\n\n";
}