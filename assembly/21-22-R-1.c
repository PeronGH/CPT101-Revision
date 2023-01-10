#include<stdio.h>

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    int sum;

    __asm {
        mov ebx, 0
        mov ecx, 0
        lea eax, array
    myLoop:
        add ebx, [eax]
        add eax, 4
        inc ecx
        cmp ecx, 10
        jl myLoop

        mov sum, ebx
    }

    printf("%d\n", sum);

    return 0;
}
