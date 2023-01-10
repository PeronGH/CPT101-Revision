#include<stdio.h>
#define MAX_SZ 3

int main() {
    char newArray[MAX_SZ];

    __asm {
        push 0h
        push 69h
        push 48h

        mov ecx, MAX_SZ
        mov esi, 0
    myLoop:
        pop eax
        mov newArray[esi], al
        inc esi
        loop myLoop
    }

    printf("%s\n", newArray);

    return 0;
}
