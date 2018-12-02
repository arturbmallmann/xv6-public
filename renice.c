#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
  if(argc < 3){
    printf(2, "usage: renice pid value...\n");
    exit();
  }
  int pid=atoi(argv[1]);
  int nice=atoi(argv[2]);
  printf(1,"pid %d, nice %d\n",pid,nice);
  if(renice(pid,nice)<0){
 	printf(0,"value must be between 0 and 20\n");
  }
  exit();
}
