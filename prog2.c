#include "types.h"
#include "user.h"
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
	exit();
}
