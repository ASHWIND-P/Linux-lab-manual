#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int i,cpid,ctr=0;
	cpid=fork();
	if(cpid==0){
		ctr=100;
		for(i=0;i<3;i++)
		   printf("Child counter is:%d\n",ctr++);
          }
	  else{
		  printf("Parent counter is:%d\n",ctr++);
	  }
	  return 0;
}
