#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    printf(1, "Lets try to protect some memory!\n");
    int *p = (int *)sbrk(1);
    mprotect(p, 1);
    printf(1, "Now lets try to unprotect that memory!\n");
    munprotect(p, 1);
    *p = 100;
    printf(1, "We should have gotten here!\n");
    exit();
}