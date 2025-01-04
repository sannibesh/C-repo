#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    if(n%2==0)
    printf("OK");
    else
    printf("it is not divied by 2");
    return 0;
}