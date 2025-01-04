#include <stdio.h>

int main() {
    int price, totalPayment;
    char role;

    
    printf("Enter the product price: ");
    scanf("%d", &price);

    printf("Enter the role ('L' for Leader, 'O' for Others): ");
    scanf(" %c", &role); 

    totalPayment = (price < 500) ? 
                    (role == 'L' ? 0 : price + 100) : 
                    (role == 'L' ? price / 2 : price + 100);


    printf("Total payment: %d\n", totalPayment);

    return 0;
}
