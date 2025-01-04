#include<stdio.h>
int main()
{ 
    int s, m, h;
    printf("enter how many second ");
    scanf("%d", &s);
    h=s/3600;
    m=(s%3600)/60;
    s=s%60;
    printf("%d sec %d min %d hour", s, m, h);
    return 0;
}
