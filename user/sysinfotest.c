#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/sysinfo.h"

int
main(int argc, char *argv[])
{
  struct sysinfo info = {0};
  if (sysinfo(&info) < 0) {
    printf("sysinfo failed\n");
    exit(1);
  } else
    printf("freemem: %d, nproc:%d\n", info.freemem, info.nproc);
  exit(0);
}
