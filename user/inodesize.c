#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void) {
  printf("Size of a given inode: %d \n", getinodesize("home/inodetest"));
  exit(0);
}