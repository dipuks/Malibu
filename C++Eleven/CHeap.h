#pragma once
#include <iostream>
using namespace std;

class CHeap
{
private:
	int a[10] = { 0 };
	int length = 1;

public:
	CHeap();
	~CHeap();

	void maxheap();
	void minheap();
	void print();
	void insert(int data);
	void heapifyup();
	void heapifydown();
	void pop();
};

