// Load loop
// Single load instruction

int main()
{
    __asm("mov r0, #0x2");
    while(1)
    {
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
        __asm("add r1, r0");
    }
    return 0;
}
