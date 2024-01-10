#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //DECLARING VARIABLES
    int a, b, c, k;
    double root1, root2;
    
    // TAKING INPUT FROM USER
    scanf("%d %d %d", &a, &b, &c);
    
    k = (b * b) - (4 * a * c);
    
    root1 = (-b + sqrt(fabs(k))) / (2.0 * a);
    root2 = (-b - sqrt(fabs(k))) / (2.0 * a);
    
    // LOGIC DEFINING USING CONDITIONAL STATEMENT-(IF,ELSE IF,ELSE)
    if (k < 0) {
        printf("roots are real and imaginary\n");
    } else if (k > 0) {
        printf("roots are real and distinct: %f, %f\n", root1, root2);
    } else {
        printf("roots are real and equal: %f\n", -b / (2.0 * a));
    }

    return 0;
}

