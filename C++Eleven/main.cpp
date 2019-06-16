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

using namespace std;

int main()
{
	testAlgo();
	/*
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