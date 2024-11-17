#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    printf("%d", (number < 0) ? 0 - number : number);
    return 0;
}
