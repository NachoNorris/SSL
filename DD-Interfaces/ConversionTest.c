//
// Created by Nacho Norris on 02/05/2021.
//

#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

/*\*/
int main (void){
    printf("This is a test for Fahrenheit vs Celsius converters\n\n");
    printf("Testing: Celsius function with 77°F\n");
    assert(Celsius(77)==25);
    printf("Success! Function Celsius worked as expected: returned value 25°C\n\n");

    printf("Testing: Fahrenheit function with 40°C\n");
    assert(Fahrenheit(40)==104);
    printf("Success! Function Fahrenheit worked as expected: returned value 104°F\n\n");
    printf("Tests end successfully");
    return 0;
}
