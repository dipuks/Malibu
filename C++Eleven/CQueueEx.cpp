#include "CQueueEx.h"

CQueueEx::CQueueEx()
{
}

CQueueEx::~CQueueEx()
{
}

void CQueueEx::pop()
{
	queue* t = head->next;
	head = t;
}

void CQueueEx::push(int data)
{
	queue* t = new queue;
	t->data = data;
	t->next = nullptr;

	if (head == nullptr)
	{
		head = t;
	}
	else
	{
		queue* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}

		temp->next = t;
		//head = temp;
	}
}

int CQueueEx::top()
{
	return head->data;
}

void CQueueEx::print()
{
	queue* t = head;

	while (t)
	{
		cout << t->data << endl;
		t = t->next;
	}
}