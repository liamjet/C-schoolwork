/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

/* 
 * This is your main function - my hidden main() will execute this function
 * when you "Run", but execute the tests when you hit "Submit"
*/ 
int user_main() {
    // YOUR IMPLEMENTATION GOES HERE
    int digit;
    scanf("%d", &digit);
    
    if (digit == 0) {
        printf("Zero");
    }
    else if (digit == 1) {
        printf("One");
    }
    else if (digit == 2) {
        printf("Two");
    }
    else if (digit == 3) {
        printf("Three");
    }
    else if (digit == 4) {
        printf("Four");
    }
    else if (digit == 5) {
        printf("Five");
    }
    else if (digit == 6) {
        printf("Six");
    }
    else if (digit == 7) {
        printf("Seven");
    }
    else if (digit == 8) {
        printf("Eight");
    }
    else if (digit == 9) {
        printf("Nine");
    }
    else {
        printf("Program only handles single digits");
    }
    
    return 0;
}
