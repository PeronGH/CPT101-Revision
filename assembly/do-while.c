#include<stdio.h>

int main() {
    int sum = 0;

    
    // int i = 0;
    // do {
    //     sum += i;
    //     i++;
    // } while (i < 5);


    __asm {
        mov ecx, 5
    l1:
        add sum, ecx

        ; The following is equivalent to: loop l1
        dec ecx
        jne l1
    }

    printf("sum: %d\n", sum);

    return 0;
}
