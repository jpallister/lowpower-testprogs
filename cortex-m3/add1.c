// Add loop

int main()
{
    __asm("mov r0, #0x20000000");
    while(1)
    {
        __asm("add r1, r0");
    }
    return 0;
}
