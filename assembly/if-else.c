#include<stdio.h>

int main() {
    int a = -1 , b = 2, c = -3;
    char fmt[] = "a = %d\nb = %d\nc = %d\n";

    printf(fmt, a, b, c);

    // if (a > 0) b += a;
    // else c+= a;

    __asm {
        mov eax, a
        cmp a, 0
        jg gt
    else:
        add c, eax
        jmp end_if
    gt:
        add b, eax
    end_if:
    }

    printf(fmt, a, b, c);

    return 0;
}
