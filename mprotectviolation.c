#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    printf(1, "Lets try to protect some memory!\n");
    int *p = (int *)sbrk(sizeof(int));
    mprotect(p, 1);
    *p = 100;
    printf(1, "We shouldn't have gotten here!\n");
    exit();
}