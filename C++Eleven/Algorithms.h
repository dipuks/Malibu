#pragma once
#include <iostream>

using namespace std;

bool isPal(const char * str)
{
	bool ret = false;
	int len = strlen(str);
	char c = ' ';
	int last = len - 1;
	for (int i = 0; i < len; i++, last--)
	{
		if ((tolower(str[i]) == tolower(str[last])) && i != last)
		{
			ret = true;
		}
		else if (tolower(str[i]) != tolower(str[last]))
		{
			ret = false;
			break;
		}		
	}
	return ret;
}

long fact(int j)
{
	int sum = 1;
	if (j <= 0)
		return sum;
	for (int i = 2; i <= j; i++)
	{
		sum *= i;
	}
	return sum;
}

int totalOdds(int k)
{
	int ret = 0;

	for (int i = 1; i <= k; i++)
	{
		if (i % 2 == 0)
		{
			ret++;
		}
	}
	return ret;
}

void fib(int n)
{
	int a{0};
	int b{ 1 };
	int c{ 0 };

	for (int i = 0; i <= n; i++)
	{
		if (i == 0)
			cout << a << ", ";
		else if (i == 1)
			cout << b << ", ";
		else
		{
			c = a + b;
			cout << c << ", ";
			a = b;
			b = c;
		}
	}
}

void swap(int a, int b)
{
	cout << "Before swap - a is " << a << "  b is " << b << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "After swap - a is " << a << "  b is " << b << endl;
}

void testAlgo()
{
	swap(52,13);
	//fib(10);
//	cout << "Total odd number is " << totalOdds(5) << endl;
	//cout << "Factorial is " << fact(5) << endl;
	/*cout << "isAlgo returned " << isPal("Hannah") << endl;
	cout << "isAlgo returned " << isPal("nitin") << endl;
	cout << "isAlgo returned " << isPal("Malyalam") << endl;*/
}