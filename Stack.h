#ifndef STACK_H
#define STACK_H


typedef struct Stack
{
    int element;
    Stack* next;
} Stack;

void push(Stack* s, unsigned int element);
int pop(Stack* s); // Return -1 if stack is empty

void initStack(Stack* s);
void cleanStack(Stack* s);


#endif // STACK_H