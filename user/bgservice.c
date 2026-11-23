#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
  printf("Background service started... \n");
  while(1){
    sleep(5);
  }
  exit(0);
}