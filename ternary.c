#include<stdio.h>
int main()
{ 
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    age >= 18 ? printf("eligible of voting") : printf("not eligible for voting");

    return 0;
}