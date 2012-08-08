// Load loop
// Single load instruction

int main()
{
    __asm("mov r0, #1");
    __asm("lsl r0, r0, #29");
    while(1)
    {
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
        __asm("ldr r1, [r0]");
    }
    return 0;
}
