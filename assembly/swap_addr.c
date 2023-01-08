int main() {
    int a = 5, b = 3;

    __asm {
        jmp start
    swap:
        push [eax]
        push [ebx]
        pop dword ptr [eax]
        pop dword ptr [ebx]
        ret
    start:
        lea eax, a
        lea ebx, b
        call swap
    }

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
