#include "LinkedList.h"
void addToList(List* q, Stack* Data)
{
	while (q->next != nullptr)
	{
		q = q->next;
	}
	q->next = createList(Data);
}
void RemoveFromList(List* q)
{
	while (q->next->next != nullptr)
	{
		q = q->next;
	}
	delete(q->next);
	q->next = nullptr;
}
List* createList(Stack* D)
{
	List* newNode = new List;
	newNode->element = D;
	newNode->next = nullptr;
	return newNode;
}