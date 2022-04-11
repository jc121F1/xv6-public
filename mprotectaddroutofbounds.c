#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    printf(1, "Lets try to protect some memory!\n");
    int *p = (int *)sbrk(1);
    mprotect(( p + (4096 * 1024)), 1);
    *p = 100;
    exit();
}
