#include<stdio.h>

int main() {
    char s_fmt[] = "%d";
    char p_fmt[] = "You inputted: %d\n";
    int input;

    __asm {
        lea eax, input
        push eax
        lea eax, s_fmt
        push eax
        call scanf
        add esp, 8

        push input
        lea eax, p_fmt
        push eax
        call printf
        add esp, 8
    }

    return 0;
}
