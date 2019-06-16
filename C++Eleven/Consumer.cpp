#include "Consumer.h"
#include <thread>

sem_t sem111, sem222;
pthread_mutex_t mutex11;
CQueue* queue11;

void *consumer(void * param)
{
	while (true)
	{
		this_thread::sleep_for(1s);
		sem_wait(&sem111);
		pthread_mutex_lock(&mutex11);
		int x = queue11->GetValue();;
		cout << "Consumer extracting value = " << x << endl;
		pthread_mutex_unlock(&mutex11);
		sem_post(&sem222);
	}
}

CConsumer::CConsumer(CQueue* q, pthread_mutex_t m, sem_t s1, sem_t s2)
{
	queue11 = queue = q;
	mutex11 = mutex = m;
	sem111 = sem1 = s1;
	sem222 = sem2 = s2;
}


CConsumer::~CConsumer()
{
}

void CConsumer::StartConsumerThread()
{
	pthread_create(&pid, NULL, consumer, NULL);
	//pthread_join(pid, NULL);
}