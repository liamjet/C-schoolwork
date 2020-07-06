//
// Name: Liam Pang-Naylor
// Section: 1270
// Date: 7/6/2020
// Purpose: Displays food needed for a certain animal
// Input: Weight, length/heigh, age, and a yes or no answer
// Output: The weight of the food needed for the animal
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float weight;
float length;
float food_lbs;
float age;
int loop = 1;
int animal;

float mammal(float weight);
float amphibian(float weight);
float reptile(float weight);


int user_main() {
    
    while (loop == 1) {   
        
        printf("Animal Type? [0]Mammal or [1]Amphibian or [2]Reptile: ");
        scanf("%d", &animal);
        
        printf("\nWeight in lbs: ");
        scanf("%f", &weight);
        
        if (animal == 0) {
            food_lbs = mammal(weight);
        }
        else if (animal == 1) {
            food_lbs = amphibian(weight);
        }
        else {
            food_lbs = reptile(weight);
        }
        food_lbs = round(food_lbs * 10) / 10;

        printf("\nFor this animal, you'll need %0.1f lbs of food a week!", food_lbs);
        
        printf("\nTry again? [0=No/1=Yes]: ");
        scanf("%d", &loop);
    }
    
    return 0;
}


float mammal(float weight) {
    int run;
    
    printf("\nHeight in feet: ");
    scanf("%f", &length);
    printf("\nAge: ");
    scanf("%f", &age);
    float food_lbs = weight / 10 + length / 3 + age / 5 * 1 / 10;
    printf("\nCan it run faster than a human? [0=No/1=Yes]: ");
    scanf("%d", &run);
    if (run == 1) {
        food_lbs = food_lbs * 1.15;
    }
    return food_lbs;
}

float amphibian(float weight) {
    int preg;
    printf("\nLength in inches: ");
    scanf("%f", &length);
    printf("\nAge: ");
    scanf("%f", &age);
    float food_lbs = weight / 5 * 2/3 + length / 6 * 1/4 + age / 4 * 1 / 5;
    printf("\nIs it pregnant? [0=No/1=Yes]: ");
    scanf("%d", &preg);
    if (preg == 1) {
        food_lbs = food_lbs * 1.1;
    }
    return food_lbs;
}

float reptile(float weight) {
    int season;
    printf("\nLength in feet: ");
    scanf("%f", &length);
    float food_lbs = weight / 6 * 1/5 + length * 1/2;
    printf("\nIs it winter? [0=No/1=Yes]: ");
    scanf("%d", &season);
    if (season == 1) {
        food_lbs = food_lbs * 0.9;
    }
    return food_lbs;

}

