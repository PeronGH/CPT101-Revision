#include<stdio.h>

int main() {
    int array[] = {1, 2, 2, 3, 5, 3, 0};
    int sum;

    __asm {
        mov ebx, 0
        mov ecx, 7
        lea eax, array
    myLoop:
        add ebx, [eax]
        add eax, 4
        loop myLoop

        mov sum, ebx
    }

    printf("Sum: %d\n", sum);

    return 0;
}
