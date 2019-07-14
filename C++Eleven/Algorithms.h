#pragma once
#include <iostream>
#include <vector>
#include <map>
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

vector<int> distributeCandies(int candies, int num_people) {
	int c = 1, d = 0;
	vector <int> v;
	v.resize(num_people);
	while (d < candies)
	{
		for (int i = 0; i < num_people; i++)
		{
			v[i] = c;
			//v.push_back(c);
			d += c;
			c++;
			if (candies - d <= c)
				c = candies - d;
		}
	}
	return v;
}

string defangIPaddr(string address) {
	string s = "[.]";
	string ret = "";

	for (int i = 0; i < address.length(); i++)
	{
		if (s[i] == '.')
		{
			ret += s;
		}
		else
		{
			ret += s[i];
		}
	}
	return ret;
}

int fibo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fibo(n - 1) + fibo(n - 2);
	}
}

bool unique(char* c, int n)
{
	int alphas[26] = { 0 };
	int i = 0;
	while (i < n)
	{
		if (alphas[c[i] - 'a'] > 0)
			return false;
		alphas[c[i] - 'a']++;
		i++;
	}
	return true;
}

char* urlify(char* c, int n)
{
	char* ret = new char[n+1];

	for (int i = 0; i < n; i++)
	{
		if (c[i] != ' ')
			ret[i] = c[i];
		else
			ret[i] = '%20';
	}
	ret[n + 1] = '\0';
	return ret;
}

void fizzbuzz(int val)
{
	cout << "Printing numbers ....." << endl;
	for (int i = 1; i <= val; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			cout << "FizzBuzz" << endl;
		else if (i % 5 == 0)
			cout << "Buzz" << endl;
		else if (i % 3 == 0)
			cout << "Fizz" << endl;
		else
			cout << i << endl;
	}
}

void ceasercipher(char* c)
{
	cout << "decrypted = " << c << endl;
	int len = strlen(c);
	char* n = new char[len+1];
	memset(n, 0, len);
	n[len] = '\0';
	for (int i = 0; i < len; i++)
	{
		char temp = c[i] + 3;
		n[i] += temp;
	}
	cout << "encrypted = " << n << endl;
	char* n1 = new char[len+1];
	memset(n1, 0, len);
	n1[len] = '\0';
	for (int i = 0; i < len; i++)
	{
		char temp = n[i] - 3;
		n1[i] += temp;
	}
	cout << "decrypted = " << n1 << endl;
}

string stringreverse(char * c)
{
	int len = strlen(c);
	string t = c;
	if (len == 1) return c;
	int i = 0, j = len - 1;
	while (i != j)
	{
		char temp = t[i];
		t[i] = t[j];
		t[j] = temp;
		i++;
		j--;
	}
	return t;
}

// a[] = {2, 3, 6, 9, 10}		b[] = {3, 5, 7, 9}
int * intersections(int a[], int an, int b[], int bn)
{
	map <int, int> m;
	int ret[10] = { -1 };
	int k = 0;
	pair<std::map<int, int>::iterator, bool> flag;
	for (int i = 0; i < an; i++)
	{
		flag = m.insert(pair<int, int>(a[i], 0));
	}
	for (int i = 0; i < bn; i++)
	{
		flag = m.insert(pair<int, int>(b[i], 0));
		if (flag.second == false)
		{
			ret[k] = b[i];
			k++;
		}
	}
	return ret;
}

void testAlgo()
{
	int a[] = { 2, 6, 9, 10 };
	int b[] = { 3, 5, 7, 9 };
	intersections(a, 4, b, 4);
	//cout << "urlify value is " << urlify("my home page", 12) << endl;
	/*string s = defangIPaddr("1.1.1.1");
	
	return;
	vector <int> v = distributeCandies(10, 3);
	for (auto i : v)
	{
		cout << i << endl;
	}*/
	//swap(52,13);
	//fib(10);
//	cout << "Total odd number is " << totalOdds(5) << endl;
	//cout << "Factorial is " << fact(5) << endl;
	/*cout << "isAlgo returned " << isPal("Hannah") << endl;
	cout << "isAlgo returned " << isPal("nitin") << endl;
	cout << "isAlgo returned " << isPal("Malyalam") << endl;*/
}