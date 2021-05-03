//
// Created by Nacho Norris on 02/05/2021.
//

double Celsius(double fahrenheit){
    double aux = fahrenheit;
    return 5*(aux-32)/9;
}

double Fahrenheit(double celsius){
    double aux = celsius;
    return aux*9/5 + 32;
}
