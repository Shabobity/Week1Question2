#include "stack.h"
#include <iostream>


void push(Stack* s, unsigned int element) 
{
    while (s->next != nullptr) 
    {
        s = s->next;
    }

    Stack* newNode = new Stack();
    newNode->element = element;
    newNode->next = nullptr;
    s->next = newNode;
}

int pop(Stack* s) 
{
    if (s->next == nullptr) 
    {
        return -1; 
    }

    while (s->next->next != nullptr) 
    {
        s = s->next;
    }

    int element = s->next->element;
    delete s->next;
    s->next = nullptr;
    return element;
}


void initStack(Stack* s) 
{
    s->element = 0;   
    s->next = nullptr;
}

void cleanStack(Stack* s) 
{
    while (s->next != nullptr) 
    {
        Stack* temp = s->next;
        s->next = s->next->next;
        delete temp;
    }
}


