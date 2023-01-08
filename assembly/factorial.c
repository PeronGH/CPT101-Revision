#include<stdio.h>

int main() {
    int result = 0;

    __asm {
        jmp start
    factorial:
        mov ecx, [esp+4] ; read param to ecx
        mov eax, 1
    mul_loop:
        mul ecx
        loop mul_loop
        ; loop is over 
        mov [esp+4], eax
        ret
    start:
        push 5
        call factorial
        pop result
    }

    printf("%d\n", result);

    return 0;
}
