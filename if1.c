#include<stdio.h>
int main()
{
    int age;
    printf("enter your age: ");
    scanf("%d", &age);

    if(age>=18) {
        printf("adult \n");
    }
    else {
        printf("not adult \n");
    }
    return 0;
}