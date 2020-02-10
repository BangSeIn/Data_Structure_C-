//Implement Queue structure
#include <iostream>
#include "Queue.h"
using namespace std;


int main()
{   
    Queue queue;
    Push(queue, 1);
    Push(queue, 2);
    Push(queue, 3);
    Print(queue);
    Pop(queue);
    Print(queue);

    return 0;
}
