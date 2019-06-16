#pragma once
#include <deque> 
#include <iostream>
using namespace std;

class CQueue
{
public:
	CQueue();
	~CQueue();
	CQueue(const CQueue&) = delete;
	CQueue& operator=(const CQueue&) = delete;

	void AddValue(int value);
	int GetValue();

private:
	deque <int> myDeque;


};

