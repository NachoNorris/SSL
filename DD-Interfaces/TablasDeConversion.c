//
// Created by Nacho Norris on 02/05/2021.
//

#include <stdio.h>
#include "Conversion.h"

/*\*/
int main (void){
    double min,max,step;
    printf("Initiating temperature degree converter program!\n");

    printf("Please, insert via keyboard the min temperature to convert:");
    scanf("%lf",&min);
    printf("\n\n");

    printf("Please, insert via keyboard the max temperature to convert:");
    scanf("%lf",&max);
    printf("\n\n");

    printf("Please, insert via keyboard the gap between temperatures:");
    scanf("%lf",&step);
    printf("\n\n");

    PrintTablas(min,max,step);
    return 0;
}