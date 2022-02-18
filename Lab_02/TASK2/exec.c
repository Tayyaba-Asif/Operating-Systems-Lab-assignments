#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h> //for ids to be dispatched parallel
#include<unistd.h> //must while using fork()

int main(int argc, char *argv[])
{
	pid_t p,t;
	p=fork();
	
	if(p==-1)
	{
	printf("child not created\n");
	}
	if(p==0){
	printf("child process is created with pid=%d\n",getpid());
        char *args[] = {"test","c","programming",NULL};
        execv("./test", args);
        }
	
	return 0;
}