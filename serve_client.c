#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

//pthread_rwlock_t lock = PTHREAD_RWLOCK_INITIALIZER;

void *downtime()
{
	//sleep(1);
	// TODO: 1st downtime, do balanceTree here.

	//sleep(2);
	// TODO: 2nd downtime, do BalanceTree here. 
	
	//sleep(3);
	// TODO: 3rd downtime, do balancetree here. 

	return NULL;
}

void *serveClient(char *clientCommand)
{
	// TODO: open the file and read commands line by line 
	FILE* fp;
	
	fp = fopen(clientCommand, "r");
	if(fp == NULL){
		printf("Unable to open file\n");
		exit(-1);
	}
	

	// TODO: match and execute commands. 

	// TODO: handle command: "insertNode <some unsigned int value>"
	// print: "[ClientName] insertNode <SomeNumber>\n"
	
	// TODO: handle command for delete

	// TODO handle command for count

	// TODO: handle command for sum subtree

	fclose(fp);
	

	return NULL;	
}
