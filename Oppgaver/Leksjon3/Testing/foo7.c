#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int iArgc, char *apszArgV[])
{
    double a, b, c, x1, x2, usq, sq;

    if (iArgc < 4){
        printf ("ex7 solves the quadratic equation on the form ax^2 + bx + c = 0.\n");
        printf ("Usage: ex7 <a> <b> <c>\n");
        return 1;
    }

    a = atof(apszArgV[1]);
    b = atof(apszArgV[2]);
    c = atof(apszArgV[3]);

    if (a == 0){
        printf("Please enter a non-zero argument");
        return 1;
    }

    usq = (b * b) - (4 * a * c);
    if (usq == 0){
        printf("No real value for the arguments...");
        return 1;
    } else {
        sq = sqrt(usq);
        x1 = (-b + sq) / (2 * a);
        x2 = (-b - sq) / (2 * a);
        printf ("Solution 1 is x = %.6f.\n", x1);
        printf ("Solution 2 is x = %.6f.\n", x2);
    }
return 0;

}

