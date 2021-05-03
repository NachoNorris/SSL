//
// Created by Nacho Norris on 02/05/2021.
//

#include <stdio.h>
#include "Conversion.h"

/*\*/
int main (void){
    double fahrenheit, celsius;
    const double farh_min = 0;
    const double farh_max = 300;
    const double step = 20;

    printf("Imprimiendo tabla de Fahrenheit a Celsius: Rango 0-300 F°\n");
    for(fahrenheit = farh_min; fahrenheit<=farh_max;fahrenheit+=step)
        printf("%3.0f F°\t %3.2f C°\n",fahrenheit,Celsius(fahrenheit));
    printf("Imprimiendo tabla de Celsius a Fahrenheit: Rango 0-300 C°\n");
    for(celsius = farh_min; celsius<=farh_max;celsius+=step)
        printf("%3.1f C°\t %4.0f F°\n",celsius,Fahrenheit(celsius));
    return 0;
}
