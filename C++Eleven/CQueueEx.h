#pragma once
#include <iostream>
using namespace std;

class CQueueEx
{
public:
	CQueueEx();
	~CQueueEx();

	void push(int data);
	void pop();
	int top();
	void print();

private:

	struct queue {
		int data;
		queue* next;
	} *head = nullptr;
};

