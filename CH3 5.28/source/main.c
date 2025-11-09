#include <stdio.h>
#include <ctype.h>

char changeCase(char ch) 
{
    if (ch >= 'A' && ch <= 'Z')
        return tolower(ch);
    else if (ch >= 'a' && ch <= 'z')
        return toupper(ch);
    else
        return ch;
}
int main()
{
    char ch;
    printf("請輸入一個字母: ");
    scanf_s(" %c", &ch);
    printf("改變大小寫後: %c\n", changeCase(ch));
    return 0;
}
