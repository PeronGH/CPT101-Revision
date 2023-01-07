#include<stdio.h>

int main() {
    int array[4] = {1, 2, 3, 4};
    int sum;

    __asm {
        mov ecx, 4
        mov eax, 0
        mov ebx, 0
    add_loop:
        add eax, array[ebx]
        add ebx, 4
        loop add_loop
    end:
        mov sum, eax
    }

    printf("%d\n", sum);

    return 0;
}