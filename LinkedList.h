#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Stack.h"

typedef struct List
{
    Stack* element;
    struct List* next;
} List;

void addToList(List* q, Stack* Data);
void RemoveFromList(List* q);
List* createList(Stack* D);

#endif // LINKEDLIST_H
