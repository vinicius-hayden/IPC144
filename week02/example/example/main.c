//
//  main.c
//  example
//
//  Created by Vinícius Hayden on 16/05/23.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int number1, number2;
    double result;
    const double PI = 3.15;
    
    printf("Enter a value for number 1: ");
    scanf("%d", &number1);
    printf("Enter a value for number 2: ");
    scanf("%d", &number2);
    
//    number1 = 42.5;
//
//    number2 = 11;
    
    result = number1 / number2;
    
    printf("The division of %d and %d is %lf\n", number1, number2, result);
    
    double radius = 2.1;
    
    printf("The area of the circle is %lf\n", radius * radius * PI);
    
    return 0;
}
