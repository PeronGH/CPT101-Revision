#include<stdio.h>

int main() {
    int result = 0;
   
    int ebp1 = 0, ebp2 = 0;

    __asm {
        jmp start
    read_to_eax:
        mov ebp2, ebp
        mov eax, [esp+4]
        ret
    start:
        mov ebp1, ebp
        push 100
        call read_to_eax
        add esp, 4
        mov result, eax
    }

    printf("Param at [esp+4] is %d\n", result);

    printf("EBP before call: %X\n  during call:%X\n", ebp1, ebp2);

    return 0;
}
