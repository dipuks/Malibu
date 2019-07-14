#include <iostream>

#define HAVE_STRUCT_TIMESPEC
#include "Pthread.h"
#include "Consumer.h"
#include "Producer.h"
#include <semaphore.h>
#include "Queue.h"
#include "SemaphoreEx.h"
#include "STDThread.h"
#include "CKeyWords.h"
#include "Algorithms.h"
#include "CSLL.h"
#include "CDLL.h"
#include "CStack.h"
#include "CQueueEx.h"
#include "CBST.h"
#include "CArrays.h"
#include "CHeap.h"
#include "CGraph.h"
using namespace std;


int main()
{
	CGraph g;
	g.mainGraph();
	//testAlgo();
	/*CHeap hp;
	hp.minheap();*/
	//testAlgo();
	/*CArrays ar;
	ar.set(23);
	ar.set(44);
	ar.set(10);
	ar.set(39);
	ar.set(7);
	ar.print();
	cout << "getting 3 = " << ar.get(3) << endl;
	ar.insert(2, 90);
	ar.print();
	ar.remove(4);
	ar.print();*/
	/*CHeap st;
	cout << "Going to minheap" << endl;

	st.minheap(10);
	st.minheap(25);
	st.minheap(9);
	st.minheap(35);
	st.minheap(7);
	st.minheap(12);
	cout << "Going to PRINT minheap" << endl;
	st.inorder(st.get());*/
	/*cout << "Going to PRINT InOrder" << endl;
	st.inorder(st.get());
	cout << "Going to PRINT PostOrder" << endl;
	st.postorder(st.get());
	cout << "MAX Depth is " << st.maxdepth(st.get()) << endl;*/
	

	/*
	CDLL dl;
	dl.main();
	
	
	Below lines are commented out for testing purpose.
	It can be enabled for testing the multi threading.
	*/
	//tester();
	/*STDThread std;
	std.start();*/

	/*pthread_t pid;
	pthread_mutex_t mutex;
	sem_t sem1, sem2;
	pthread_mutex_init(&mutex, NULL);
	sem_init(&sem1, NULL, 0);
	sem_init(&sem2, NULL, 100);

	CProducer* p = new CProducer(queue, mutex, sem1, sem2);
	CConsumer* c = new CConsumer(queue, mutex, sem1, sem2);
	p->StartProducerThread();
	c->StartConsumerThread();*/

	/*char a[10];
	CPthread cp;
	char s[] = "computer is mine";
	try {
		sprintf_s(a, 10, "%s", s);
	}
	catch (...)
	{
		cout << "error" << endl;
	}
	cp.test();
	cout << "Hello" << endl;*/
	system("pause");
	return 0;
}