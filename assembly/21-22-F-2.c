#include<stdio.h>

int main() {
    int intArray[] = {3, 1, 2};

    __asm {
        mov ecx, 2

        lea esi, intArray
    L1:
        mov eax, [esi]
        cmp [esi+4], eax
        JG L2
        xchg eax, [esi+4]
        mov [esi], eax
    L2:
        add esi, 4
        
        ; jmp L1
        loop L1
    }

    for (int i = 0; i < 3; i++)
        printf("%d\n", intArray[i]);

    return 0;
}
