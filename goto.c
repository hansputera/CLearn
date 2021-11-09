#include <stdio.h>

int main() {
    int num1;
    int num2;


    scanf("%d", &num1);
    scanf("%d", &num2);
    goto calc;

calc:
    printf("\nSubs: %d", num1-num2);
    printf("\nSums: %d", num1+num2);
    printf("\nDivide: %d\n", num1/num2);
    return 0;
}
