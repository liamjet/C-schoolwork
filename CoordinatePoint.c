//
// Name: Liam Pang-Naylor
// Section: 1270
// Date: 6/29/2020
// Purpose: Tells user which quadrand a given point is in
// Input: Two integers representing a point in a plane
// Output: A print statement determining the quadrant of that point
//

#include <stdio.h>
#include <stdlib.h>


int user_main() {
    
    // Variable declaration. Already included in assignment.
    float x, y;
    scanf("%f %f", &x, &y);
    
    
    // Five conditional statements and five prints to cover every possibility. Not using loops or strings
    // as we have no learned that yet. %g is used to truncate the decimals down to whole numbers as shown
    // in the example case. Also includes a case for a point on an axis.
    if (x > 0 && y > 0) {
        printf("The coordinate point (%g, %g) lies in the First quadrant.", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("The coordinate point (%g, %g) lies in the Second quadrant.", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("The coordinate point (%g, %g) lies in the Third quadrant.", x, y);
    }
    else if (x > 0 && y < 0) {
        printf("The coordinate point (%g, %g) lies in the Fourth quadrant.", x, y);
    }
    else {
        printf("The coordinate point (%g, %g) does not lie in any quadrant but is on an axis.", x, y);   
    }
        
    return 0;
}