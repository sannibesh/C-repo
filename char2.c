#include<stdio.h>

int main() {
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    
    if ((ch >= 'A') && (ch <= 'Z')) {
        printf("%c is a capital letter", ch);
    }
    else if ((ch >= 'a') && (ch <= 'z')) {
        printf("%c is a small letter", ch);
    }
    else {
        printf("CHARACTER ERROR");
    }
    
    return 0;
    
}