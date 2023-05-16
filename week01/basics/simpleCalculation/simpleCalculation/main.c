//
//  main.c
//  simpleCalculation
//
//  Created by Vinícius Hayden on 15/05/23.
//

#include <stdio.h>

int main(void) {
    const float pi = 3.14159f; // pi is a constant float
    float radius;              // radius is a float
    float area;                // area is a float
    
    printf("Enter radius : ");  // prompt user for radius input
    scanf("%f", &radius);       // accepts radius value from user
    
    area = pi * radius * radius;
    printf("Area = %f\n", area);
    
    return 0;

}
