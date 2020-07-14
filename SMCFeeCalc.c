/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

float Winter_Summer(int parking, int sticker, int id_card);
float Fall_Spring(int parking, int sticker, int id_card);

int units, season, resident, parking, sticker, id_card;
float total_cost;



/* 
 * This is your main function - my hidden main() will execute this function
 * when you "Run", but execute the tests when you hit "Submit"
*/ 
int user_main() {
    
    printf("SMC Fee Calculator\n");
    printf("Enter number of units enrolled: ");
    scanf("%d", &units);
    printf("Is this Fall[0], Winter[1], Spring[2] or Summer[3] session: ");
    scanf("%d", &season);
    printf("Are you a state resident[0] or not[1]: ");
    scanf("%d", &resident);
    printf("Want a parking decal? [1 for yes/0 for no]: ");
    scanf("%d", &parking);
    printf("Want an AS sticker? [1 for yes/0 for no]: ");
    scanf("%d", &sticker);
    printf("Want an ID card? [1 for yes/0 for no]: ");
    scanf("%d", &id_card);
    
    if (season == 0 || season == 2) {
        total_cost = Fall_Spring(parking, sticker, id_card);
    }
    else {
        total_cost = Winter_Summer(parking, sticker, id_card);
    }
    if (resident == 0) {
        total_cost = total_cost + 46 * units;
    }
    else {
        total_cost = total_cost + 335 * units;
    }
    if (season == 0) {
        printf("For Fall semester, your total fees are $%0.2f",total_cost);
    }
    else if (season == 1) {
        printf("For Winter semester, your total fees are $%0.2f",total_cost);
    }
    else if (season == 2) {
        printf("For Spring semester, your total fees are $%0.2f",total_cost);
    }
    else {
        printf("For Summer semester, your total fees are $%0.2f",total_cost);
    }
    
    
    return 0;
}



float Winter_Summer(int parking, int sticker, int id_card) {
    float season_cost = 0;
    if (parking == 1) {
        season_cost = season_cost + 45.00;
    }
    if (sticker == 1) {
        season_cost = season_cost + 19.50;
    }
    if (id_card == 1) {
        season_cost = season_cost + 13.00;
    }
    season_cost = season_cost + 16.00;
    printf("%0.2f",season_cost);

    return season_cost;
}


float Fall_Spring(int parking, int sticker, int id_card) {
    float season_cost = 0;
    if (parking == 1) {
        season_cost = season_cost + 85.00;
    }
    if (sticker == 1) {
        season_cost = season_cost + 19.50;
    }
    if (id_card == 1) {
        season_cost = season_cost + 13.00;
    }
    season_cost = season_cost + 19.00;

    return season_cost;

}