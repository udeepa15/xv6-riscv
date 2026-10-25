#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void) {
    printf("start of kernel = %p\n", (void *)getkernelstartaddr());
    printf("end of kernel = %p\n", (void *)getkernelendaddr());
    printf("addr of kernel variable = %p\n", (void *)getkernelvariaddr());
    printf("addr of fork sys call = %p\n", (void *)getsystemcalladdr());
    exit(0);
}
