//
// Created by Nacho Norris on 03/05/2021.
//

#ifndef EXTRA_TP1_CONVERSION_H
#define EXTRA_TP1_CONVERSION_H

double Celsius(double fahrenheit);
double Fahrenheit(double celsius);
void PrintFila(double temp1,double temp2);
void PrintFilas(double (*function)(double),double min,double max,double step);
void PrintTablasFahrenheit(double min, double max, double step);
void PrintTablasCelsius(double min, double max, double step);
void PrintTablas(double min, double max, double step);

#endif //EXTRA_TP1_CONVERSION_H
