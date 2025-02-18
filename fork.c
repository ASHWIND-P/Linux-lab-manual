#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	pid_t cpid;
	cpid=fork();
        if (cpid==0)
		printf("Hello I am child\n");
	else
		printf("Hello I am parent\n");
	return 0;
}
