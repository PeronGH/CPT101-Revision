int main() {
    int a = 5, b = 3;

    __asm {
        jmp start
    swap:
        push eax
        mov eax, ebx
        pop ebx
        ret
    start:
        mov eax, a
        mov ebx, b
        call swap
        mov a, eax
        mov b, ebx
    }

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
