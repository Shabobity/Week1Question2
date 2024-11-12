#include "Utils.h"
#include "Stack.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
	Stack* A = new Stack();
	initStack(A);
	int i = 0;
	for (i = 0; i < int(size); i++)
	{
		push(A, nums[i]);
	}
	for (i = 0; i < int(size); i++)
	{
		nums[i] = pop(A);
	}
}
int* reverse10()
{
	int* nums = new int[10];
	int max = 10;
	int i = 0;
	for (i = 0; i < max; i++)
	{
		std::cin >> nums[i];
	}
	reverse(nums, max);
	return nums;
}
