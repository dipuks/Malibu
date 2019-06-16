#include "Queue.h"



CQueue::CQueue()
{
}


CQueue::~CQueue()
{
}

void CQueue::AddValue(int value)
{
	myDeque.push_front(value);
}

int CQueue::GetValue()
{
	deque <int>::iterator it = myDeque.begin();
	int ret = *it;
	myDeque.pop_front();
	return ret;
}