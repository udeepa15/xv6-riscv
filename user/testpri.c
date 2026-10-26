#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
    printf("I'm running with ordinary priority\n");
    printf("setting priority to %d\n", setpriority(1));
    sleep(2);
    printf("I'm running with priority 1 \n");
    printf("setting priority to %d\n", setpriority(2));
    sleep(2);
    // below line should never work
    printf("I'm running with priority 2 \n");
    exit(0);
}