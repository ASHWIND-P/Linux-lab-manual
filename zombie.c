#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
	pid_t cpid=fork();
	if(cpid==0){
		printf("Terminating parent,PID=%ld\n",(long)getpid());
		exit(0);
	}
	else{
		printf("Running child,PID=%ld\n",(long)getpid());
		while(1);
	}
	return 0;
}
