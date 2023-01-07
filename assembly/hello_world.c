#include<stdio.h>

int main() {
    char format[] = "Hello, world!\n";
    __asm {
        lea eax, format
        push eax
        call printf
        add esp, 4
    }
    return 0;
}