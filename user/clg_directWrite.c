#include "lib.h"

void
umain(int argc, char **argv)
{
    u_int *addr = (u_int *)0xb3004100;
    u_int data = 0xaabbccdd;
    writef("Trying to write to 0x%x, data: [0x%x]\n", addr, data);
    *addr = data;
    writef("Finished!\n", *addr);
    
    writef("Trying to read 0x%x\n", addr);
    writef("Result is [0x%x]\n", *addr);
    return;
}