// 
// Name: Liam Pang-Naylor
// Section: 1270
// Date: 7/1/2020
// Purpose: Calculates assessed value and tax for a property and number of times.
// Input: Original value and 1 and 0 for checks
// Output: Assessed value, quarterly tax, and yearly tax
// 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int user_main() {
    float actual_value;
    float assessed_value;
    float prop_tax;
    float quar_tax;
    int exception;
    int cont = 1;
    
    while (cont == 1) {
        printf("What is the property's actual value: ");
        scanf("%f", &actual_value);
        printf("Does the homeowner's exception apply (1=yes, 0=no): ");
        scanf("%d", &exception);
        assessed_value = actual_value * 0.75;
        if (exception == 1) {
            assessed_value = assessed_value - 10000;
        }
        printf("Assessed value is: %0.2f\n", assessed_value);
        prop_tax = assessed_value * 0.0189;
        printf("Property tax owed is: %0.2f\n",prop_tax);
        if (exception == 1) {
            quar_tax = prop_tax / 4;
            quar_tax = quar_tax * 100;
            quar_tax = round(quar_tax);
            quar_tax = quar_tax / 100;
            printf("Quarterly tax owed is: %0.2f\n", quar_tax);
        }
        printf("Quarterly tax option not available");
        printf("Do you want to continue [1=yes, 0=no]: ");
        scanf("%d", &cont);
    }
}


