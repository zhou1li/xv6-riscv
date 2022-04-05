#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  char *info = "usage: trace mask cmd argv";
  int mask = 0;
  if(argc < 3){
    write(1, info, strlen(info));
    exit(1);
  }
  mask = atoi(argv[1]);
  trace(mask);
  exec(argv[2], &argv[2]);
  exit(0);
}
