#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int i = 0;

void* add(){
	for (int i = 0; i < 1000000; ++i)
	{
		i++;
	}
	return NULL;
}

void* sub(){
	for (int i = 0; i < 1000000; ++i)
	{
		i--;
	}
	return NULL;
}


int main(){
    pthread_t thread1;
    pthread_create(&thread1, NULL, add, NULL);
    // Arguments to a thread would be passed here ---------^

    pthread_t thread2;
    pthread_create(&thread2, NULL, sub, NULL);
    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("Done: %i\n",i);
    return 0;
    
}