#include<stdio.h>

int main() {
    int result;

    __asm {
        jmp start
    diff:             ; or diff proc in MASM
        sub eax, ebx
        jg diff_end
        neg eax
    diff_end:
        ret
    start:            ; or diff endp in MASM
        mov eax, 5
        mov ebx, 13
        call diff
        mov result, eax
    }

    printf("%d\n", result);

    return 0;
}
