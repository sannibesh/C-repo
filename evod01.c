#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("%d", n % 2 == 0);
    return 0;
}