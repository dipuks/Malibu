#include "CSLL.h"

CSLL::CSLL()
{
}

CSLL::~CSLL()
{
}

void CSLL::main()
{
	createloop();
	cout << endl << "IS LOOP is " << isloop() << endl;
	return;
	//head = new node;
	/*push_front(4);
	push_front(3);
	push_front(7);
	push_front(9);
	push_front(1);*/

	//display(head);

	push_back(11);
	push_back(8);
	push_back(23);
	push_back(14);
	push_back(50);
	count();
	display(head);

	cout << endl << "INSERT " << endl;
	insert(3, 55);
	count();
	display(head);	

	cout << endl << "POP ";
	cout << pop(3) << endl;
	count();
	display(head);

	cout << "Circular is " << circular() << endl;

	cout << "SORT " << endl;
	sort();
	count();
	display(head);
}

void CSLL::push_back(int data, bool flag)
{
	node * t = new node;
	t->data = data;

	if (!flag)
		t->next = nullptr;
	else
		t->next = head;

	node * p = head;

	if (!p)
	{
		head = t;
		return;
	}

	while (p->next)
	{
		p = p->next;
	}

	p->next = t;
}

void CSLL::push_front(int data)
{
	node * t = new node;
	t->data = data;
	t->next = head;
	head = t;
}

void CSLL::display(node* n)
{
	node * t = n;

	while (t)
	{
		cout << t->data << endl;
		t = t->next;

		if (t == head)
			break;
	}
}

void CSLL::insert(int pos, int data)
{
	node * t = new node;
	t->data = data;
	t->next = nullptr;

	node * p = head;

	for (int i = 1; p != nullptr, i < pos - 1; i++)
	{
		p = p->next;
	}

	t->next = p->next;
	p->next = t;
}

int CSLL::pop(int pos)
{
	node * p = head;
	node *t = nullptr;
	int x = 0;

	for (int i = 1; p != nullptr, i < pos - 1; i++)
	{
		p = p->next;
	}

	t = p->next;
	x = t->data;
	p->next = p->next->next;
	delete t;
	return x;
}

bool CSLL::circular()
{
	bool flag = false;
	node * p = head;

	while (p)
	{
		p = p->next;

		if (p == head)
		{
			flag = true;
			break;
		}
	}

	return flag;
}

int CSLL::count()
{
	node * p = head;
	int count = 0;

	while (p)
	{
		p = p->next;

		if (p == head)
			break;
		count++;
	}

	return count;
}

bool CSLL::isloop()
{
	node * p, *q;
	p = head;
	//q = head;

	do
	{
		p = p->next;
		q = p->next->next->next;
	} 
	while (p != q && p && q);

	if (p == q && p && q)
		return true;

	return false;
}

void CSLL::sort()
{
	bool flag = false;
	node * p = nullptr;

	while (!flag)
	{
		p = head;
		flag = true;
		while (p->next)
		{
			if (p->data > p->next->data)
			{
				int t = p->next->data;
				p->next->data = p->data;
				p->data = t;
				flag = false;
			}
			p = p->next;
		}
	}
}

void CSLL::createloop()
{
	int a[] = { 12, 23, 34, 45, 56 };
	node * p = nullptr;

	for (int i = 0; i < 5; i++)
	{
		node * t = new node;
		t->data = a[i];

		if (i != 4)
			t->next = nullptr;
		else
			t->next = p;
		node * q = head;

		if (q == nullptr)
		{
			head = t;
		}
		else
		{
			while (q->next)
			{
				q = q->next;
			}
			q->next = t;

			if (i == 2)
			{
				p = t;
			}
		}
	}
}