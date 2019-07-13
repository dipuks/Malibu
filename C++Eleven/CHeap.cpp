#include "CHeap.h"

CHeap::CHeap()
{
}

CHeap::~CHeap()
{
}

void CHeap::pop()
{
	int temp = a[1];
	a[1] = a[length - 1];
	a[length - 1] = temp;
	int first = 2;
	length--;
	while (first < length)
	{
		if (a[first / 2] > a[first])
		{
			int temp = a[first];
			a[first] = a[first / 2];
			a[first / 2] = temp;
		}
		first++;
	}
}

void CHeap::heapifydown()
{
	int first = length;
	while (first > 1)
	{
		if (a[first / 2] > a[first])
		{
			int temp = a[first];
			a[first] = a[first / 2];
			a[first / 2] = temp;
		}
		first /= 2;
	}
}

void CHeap::heapifyup()
{
	int first = length;

	while (first > 1)
	{
		if (a[first / 2] < a[first])
		{
			int temp = a[first];
			a[first] = a[first / 2];
			a[first / 2] = temp;
		}
		first = first / 2;
	}
}

void CHeap::insert(int data)
{
	a[length] = data;
	//heapifyup();
	heapifydown();
	length++;
}

void CHeap::maxheap()
{
	insert(34);
	insert(79);
	insert(22);
	insert(13);
	insert(60);
	print();
}

void CHeap::minheap()
{
	insert(34);
	insert(79);
	insert(22);
	insert(13);
	insert(60);
	print();
	pop();
	pop();
	pop();
	pop();
	pop();
	print();
}

void CHeap::print()
{
	cout << "Printing......" << endl;
	for (int i = 1; i < 6; i++)
	{
		cout << a[i] << endl;
	}
}