#include "Pthread.h"

void * t(void * parm)
{
	cout << "thread started" << endl;
	return 0;
}

CPthread::CPthread()
{
}


CPthread::~CPthread()
{
}

void CPthread::test()
{
	pthread_create(&pid, NULL, t, NULL);

	pthread_join(pid, NULL);
}