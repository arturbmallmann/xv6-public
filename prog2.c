#include "types.h"
//#include "usertests.c"
#include "user.h"

unsigned long randstate = 1;
unsigned int
rand()
{
  randstate = randstate * 1664525 + 1013904223;
  return randstate;
}
int main(int argc, char *argv[]){
	int n=1;
	if(argc>1){
		printf(1,"hello");
		n=atoi(argv[1]);
	}
	printf(1,"programa feito para matar tempo. Threads: %d\n\n",n);
	int old=getpid();
	int pid=fork();
	int i=0;
	for(;i<1000;i++){}
	//if (getpid()==(old+1) && pid == 0)
	//	fork();
	printf(1,"old %d new %d\n",old,pid);	
	randstate=uptime();
	for(i=30;i!=0;i--)
		printf(0,"rand: %d\n",rand()%20);
	exit();
}
