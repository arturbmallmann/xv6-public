#include "types.h"
#include "user.h"
int fib(int i){
	//printf(1,"seq %d\n",i);
	if(i==1)
	 return 1;
	if(i==2)
	 return 1;
	return fib(i-1)+fib(i-2);
}
int main(int argc, char *argv[]){
	int n=1;
	if(argc>1){
		printf(1,"hello");
		n=atoi(argv[1]);
	}
	int f=0,pid;
	printf(1,"programa feito para matar tempo. Threads: %d\n\n",n);
	while(f<n){
		f++;
		pid=fork();
		renice(pid,f%20);
		if(pid>0){
			printf(1,"%d processo %d criado\n",getpid(),pid);
	//		ps();
			//wait();
		}else if(pid<0)
			printf(1,"%d Deu pau!\n",getpid());
		else{
			printf(1,"%d Sou eu! %d\n",getpid(),pid);
			int o,u;
			double x;
while(1){}
			for (o=0;o<640000;o++){
				for(u=0;u<3500;u++)
					x+=u;
				x+=o*3.1415/2*1.5;
				fib(9);
			}
			printf(1,"%d I'm done!!!\n",getpid());
			exit();
		}
	}
	exit();
}
