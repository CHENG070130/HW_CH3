#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else 
    {
        unsigned long long int prev1 = 0, prev2 = 1, current;
        for (unsigned int i = 2; i <= n; i++) 
        {
            current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }
        return prev2;
    }
}

int main() 
{
    unsigned int n;
    printf("請輸入 n 的值: ");
    scanf_s("%u", &n);
    printf("第 %u 個 Fibonacci 數為: %llu\n", n, fibonacci(n));
    return 0;
}
