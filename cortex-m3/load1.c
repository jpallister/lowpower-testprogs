// Load loop
// Single load instruction

int main()
{
    __asm("mov r0, #0x20000000");
    while(1)
    {
        __asm("ldr r1, [r0]");
    }
    return 0;
}
