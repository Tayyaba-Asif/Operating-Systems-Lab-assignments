#include<stdio.h>
#include<sys/types.h> //for ids to be dispatched parallel
#include<unistd.h> //must while using fork()

int main()
{
	pid_t p,t;
	p=fork();
	
	if(p==-1)
	{
	printf("child not created\n");
	}
	if(p==0){
	       
        printf("\nI am child\n");
        printf("my pid is: %d\n", getpid());
        
        if(fork()==0){        
        	printf("\nI am grandchild\n");
        	printf("my pid is: %d\n", getpid());
        	printf("my parent pid is: %d\n", getppid());
        	
        	if(fork()==0){        
        		printf("I am great_grandchild\n");
        		printf("my pid is: %d\n", getpid());
        		printf("my parent pid is: %d\n", getppid());
        		
               	}
               	
               }    
        
        }
	
	return 0;
}