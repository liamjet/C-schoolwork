/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

/* 
 * This is your main function - my hidden main() will execute this function
 * when you "Run", but execute the tests when you hit "Submit"
*/ 
int user_main() {
    // YOUR IMPLEMENTATION GOES HERE
    float price, paid, change;

    printf("Enter the sales price: ");
    scanf("%f", &price);
    
    printf("Enter the cash paid: ");
    scanf("%f", &paid);
    
    change = paid - price;
    float temp = change * 100;
    int leftover = (int)temp;
    printf("%d ",leftover);
    int dollars = leftover / 100;
    printf("%d ",leftover);
    leftover = leftover % 100;
    printf("%d ",leftover);
    int quarters = leftover / 25;
    leftover = leftover % 25;
    printf("%d ",leftover);
    int dimes = leftover / 10;
    leftover = leftover % 10;
    printf("%d ",leftover);
    int nickels = leftover / 5;
    leftover = leftover % 5;
    printf("%d ",leftover);
    int pennies = leftover;
    
    
    printf("Here's your change: %g\n", change);
    printf("%d dollars, %d quarters, %d dimes, %d nickels and %d pennies",dollars, quarters, dimes, nickels, pennies);
    return 0;
}
