#include "CStack.h"



CStack::CStack()
{
}


CStack::~CStack()
{
}

void CStack::pop()
{
	stack* t = head->next;
	head = t;
}

void CStack::push(int data)
{
	stack* t = new stack;
	t->data = data;
	t->next = nullptr;

	if (head == NULL)
	{
		head = t;
	}
	else
	{
		t->next = head;
		head = t;
	}
}

int CStack::top()
{
	int ret = 0;
	ret = head->data;
	return ret;
}

void CStack::print()
{
	stack* t = head;

	while (t)
	{
		cout << t->data << endl;
		t = t->next;
	}
}