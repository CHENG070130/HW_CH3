#include <stdio.h>

int power(int base, int exponent) 
{
    if (exponent == 1)
        return base;
    else
        return base * power(base, exponent - 1);
}

int main() 
{
    int base, exponent;
    printf("請輸入底數和指數: ");
    scanf_s("%d %d", &base, &exponent);
    printf("%d 的 %d 次方是 %d\n", base, exponent, power(base, exponent));
    return 0;
}
