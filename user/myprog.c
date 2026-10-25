#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void) {
    printf("Hello world\n");
    printf("%d\n", mysyscall());
    exit(0);
}
