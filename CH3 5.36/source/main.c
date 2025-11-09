#include <stdio.h>

void hanoi(int n, char source, char target, char auxiliary)
{
    if (n == 1) 
    {
        printf("將圓盤 1 從 %c 移到 %c\n", source, target);
        return;
    }
    hanoi(n - 1, source, auxiliary, target);
    printf("將圓盤 %d 從 %c 移到 %c\n", n, source, target);
    hanoi(n - 1, auxiliary, target, source);
}

int main()
{
    int n;
    printf("請輸入圓盤數量: ");
    scanf_s("%d", &n);
    printf("移動步驟如下:\n");
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
