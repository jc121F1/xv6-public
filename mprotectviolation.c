#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    printf(1, "Lets try to protect some memory!\n");
    int protectThis = 16;
    mprotect(&protectThis, sizeof(protectThis));
    printf(1, "We shouldn't have gotten here!\n");
    exit();
}