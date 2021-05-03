//
// Created by Nacho Norris on 02/05/2021.
//

#include <stdio.h>

double Celsius(double fahrenheit){
    double aux = fahrenheit;
    return 5*(aux-32)/9;
}

double Fahrenheit(double celsius){
    double aux = celsius;
    return aux*9/5 + 32;
}

void PrintFila(double temp1,double temp2){
    printf("%.2f \t %.2f \n",temp1,temp2);
}

void PrintFilas(double (*function)(double),double min,double max,double step){
    for(double temperature = min; temperature<=max;temperature+=step)
        PrintFila(temperature,function(temperature));
}

void PrintTablasFahrenheit(double min, double max, double step){
    printf("From Fahrenheit to Celsius\n°F\t°C\n");
    PrintFilas(Celsius,min,max,step);
}

void PrintTablasCelsius(double min, double max, double step){
    printf("From Celsius to Fahrenheit\n°C\t°F\n");
    PrintFilas(Fahrenheit,min,max,step);
}

void PrintTablas(double min, double max, double step){
    PrintTablasFahrenheit(min,max,step);
    PrintTablasCelsius(min,max,step);
}

