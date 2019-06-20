#include "CDLL.h"

CDLL::CDLL()
{
}

CDLL::~CDLL()
{
}

void CDLL::main()
{
	/*cout << "PUSH FRONT " << endl;

	push_front(20);
	push_front(90);
	push_front(60);
	push_front(10);
	push_front(80);

	display();*/

	cout << "PUSH BACK " << endl;

	push_back(9);
	push_back(7);
	push_back(5);
	push_back(1);
	push_back(8, false);
	display();

	cout << "INSERT " << endl;
	insert(4, 70);
	display();

	cout << "POP " << pop(4) << endl;
	display();

	cout << "SORT " << endl;
	sort();
	display();

	cout << endl << "CIRCULAR  " << circular() << endl;
}

void CDLL::push_front(int data)
{
	node * t = new node;
	t->data = data;
	t->prev = nullptr;
	t->next = nullptr;

	if (head == nullptr)
	{
		head = t;
	}
	else
	{
		t->next = head;
		head->prev = t;
		head = t;
	}
}

void CDLL::push_back(int data, bool flag)
{
	node * t = new node;
	t->data = data;
	t->prev = nullptr;
	t->next = nullptr;

	if (flag)
	{
		t->next = head;
		head->prev = t;
	}


	if (head == nullptr)
	{
		head = t;
	}
	else
	{
		node * p = head;
		while (p->next)
		{
			p = p->next;
		}

		t->prev = p;
		p->next = t;
	}
}

void CDLL::display()
{
	node * t = head;

	while (t)
	{
		cout << t->data << endl;
		t = t->next;

		if (t == head)
			break;
	}
}

void CDLL::insert(int pos, int data)
{
	node * t = new node;
	t->data = data;
	t->next = nullptr;
	t->prev = nullptr;
	node * p = head;

	for (int i = 1; i < pos && p != nullptr; i++)
	{
		p = p->next;
	}

	t->prev = p;
	t->next = p->next;
	p->next = t;
}

int CDLL::pop(int pos)
{
	int x = -1;
	node * p = head;
	node * t;

	for (int i = 1; i < pos && p != nullptr; i++)
	{
		p = p->next;
	}

	t = p->next;
	x = t->data;
	t->next->prev = p;
	p->next = t->next;
	delete t;

	return x;
}

void CDLL::sort()
{
	bool flag = false;
	node * p = head;

	while (!flag)
	{
		p = head;
		flag = true;
		
		while (p->next && p->next != head)
		{
			if (p->data > p->next->data)
			{
				int temp = p->next->data;
				p->next->data = p->data;
				p->data = temp;
				flag = false;
			}
			p = p->next;
		}
	}
}

bool CDLL::circular()
{
	bool flag = false;
	node * t = head;

	while (t->next)
	{
		t = t->next;

		if (t == head)
			return true;
	}	

	return flag;
}