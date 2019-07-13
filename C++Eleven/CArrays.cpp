#include "CArrays.h"

CArrays::CArrays()
{
	a[10] = { 0 };
	length = 0;
}

CArrays::~CArrays()
{
}

int CArrays::get(int index)
{
	return a[index];
}

void CArrays::set(int data)
{
	a[size()] = data;
	length++;
}

void CArrays::insert(int index, int data)
{
	if (index > length)
		return;

	for (int i = size(); i > index; i--)
	{
		a[i] = a[i - 1];
		a[i - 1] = a[i - 2];
	}
	a[index] = data;
	length++;
}

void CArrays::remove(int index)
{
	if (index > length)
		return;

	for (int i = index; i < length; i++)
	{
		a[i] = a[i + 1];
	}
	length--;
}

int CArrays::size()
{
	return length;
}

bool CArrays::isEmpty()
{
	if (length == 0)
		return true;
	else
		return false;
}

void CArrays::print()
{
	cout << "starting to print " << endl;
	for (int i = 0; i < length; i++)
	{
		cout << a[i] << endl;
	}
}