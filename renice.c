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
  renice(pid,nice);
  exit();
}
