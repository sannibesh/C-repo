#include<stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    printf("%d", (n>9)&&(n<100));
    return 0;
}